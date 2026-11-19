# Extended airflow range

The firmware extends the airflow capability to a nominal 2048 kg/h for larger
MAF sensors, including forced induction applications. The MAF linearisation table
must be calibrated for the sensor fitted; increasing the range alone does not
provide that sensor's calibration.

## Scaling

The MAF linearisation table (`id_maf_tab`) stores half the original raw values,
with matching averaging and pulsation scaling. Odd raw values are rounded down
when halved.

The A2L uses `0.03125 * X` kg/h and automatically derives the representable maximum
of 2047.96875 kg/h from the unsigned 16-bit storage type. No maximum override is
hardcoded in the A2L generator.

Both MAF averaging paths divide by the sample count instead of twice the count.
The pulsation calculation's denominator is also halved to preserve its physical
scaling with the smaller table values.

## Diagnosis

The high-flow diagnostic threshold (`C_MAF_MAX_DIAG`) is increased from 650 to
1300 kg/h. This check remains active above 1300 kg/h, below the nominal 2048 kg/h
measurement range. Its calibration should match the intended application.
