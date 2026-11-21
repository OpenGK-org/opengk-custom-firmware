# Estimated boost for logging

The firmware exposes three additional A2L measurements:

| Measurement | Unit | Meaning |
|---|---|---|
| `map_est` | hPa absolute | Manifold pressure estimated from measured MAF and the existing air-charge model |
| `boost_est` | hPa gauge | Positive pressure above ambient, or zero under vacuum |
| `boost_est_available` | 0 / 1 | Zero when inputs cannot produce an estimate; one when the calculation is available |

For example, 2000 hPa absolute with 1000 hPa ambient produces 1000 hPa
(1 bar) of estimated positive boost. Log `amp`, `maf_kgh_mes`, `eff_vol_slop`
and `eff_vol_ofs` alongside these measurements when reviewing the model.

The signals update with `Calc_AirCharge_Model`. They are separate from `map`,
`amp`, load, fueling, ignition and pressure adaptation: no engine-control
calculation consumes the new signals. Resetting the pressure model clears them.

## Calculation

The existing model calculates cylinder flow from manifold pressure:

```text
flow_raw = max(0, min(65535, map_raw * slope_raw >> 11) - offset_raw)
```

Under steady conditions, measured MAF approximates cylinder flow. The estimate
inverts that relationship, rounding to the nearest pressure count:

```text
map_est_raw = ((maf_kgh_mes_raw + eff_vol_ofs_raw) * 2048
               + eff_vol_slop_raw / 2) / eff_vol_slop_raw
boost_est_raw = max(map_est_raw - amp_raw, 0)
```

Integer division truncates. Both pressure outputs retain the existing
`5434 / 65535` hPa/count encoding, with a 5434 hPa absolute full scale for
`map_est`. The intermediate numerator is 32-bit. The six output bytes are
reserved at 0xD7F0..0xD7F5 in the unused application RAM tail, after the CCP
state and within the startup RAM initialization range ending at 0xD7FF.

The estimate is unavailable when RPM, ambient pressure, slope or measured flow
is zero; when MAF or intake-temperature diagnostic flags indicate a fault;
when airflow is saturated; or when the quotient exceeds a pressure word.
The sum of flow and offset must also be below 65535: a saturated forward
product cannot be uniquely inverted even if its offset reduces the final flow.
Unavailable outputs are cleared to zero. Always log the availability signal
to distinguish unavailable data from a valid zero-boost reading.

## Interpretation

Availability means the inputs passed these checks. It does **not** establish
pressure accuracy or qualify transient operation. Throttle movement, manifold
and charge-pipe filling, EGR, compressor heating and recirculation can make MAF
different from cylinder flow. The existing volumetric-efficiency and
temperature calibration may not remain accurate under boost. These effects
are not compensated by this logging feature.

Validate the model before using its output to make tuning decisions. This
feature does not add boost control or replace a MAP sensor measurement.
