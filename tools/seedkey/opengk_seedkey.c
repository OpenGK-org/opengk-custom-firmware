/*
 * opengk_seedkey.dll - CCP Seed & Key DLL for the OPENGK firmware.
 *
 * Calibration tools (CANape, INCA, ...) load the DLL named in the A2L's
 * IF_DATA ASAP1B_CCP / SEED_KEY block and call ASAP1A_CCP_ComputeKeyFromSeed()
 * when the ECU answers GET_SEED for a protected resource (CAL, DAQ, PGM).
 *
 * The OPENGK firmware sends a fixed seed and accepts any key, so the key is
 * simply the seed echoed back.
 *
 * Interface (ASAM CCP 2.1 seed & key DLL): undecorated __cdecl export, returns
 * non-zero on success.  Built for x86 and x64 (tools/seedkey/Makefile).
 */
#include <string.h>

#ifdef _WIN32
#define EXPORT __declspec(dllexport)
#define CALLCONV __cdecl
#else
#define EXPORT
#define CALLCONV
#endif

EXPORT int CALLCONV ASAP1A_CCP_ComputeKeyFromSeed(
    const unsigned char *seed, unsigned short sizeSeed,
    unsigned char *key, unsigned short maxSizeKey, unsigned short *sizeKey)
{
    if (!seed || !key || !sizeKey || sizeSeed > maxSizeKey)
        return 0;
    memcpy(key, seed, sizeSeed);
    *sizeKey = sizeSeed;
    return 1;
}
