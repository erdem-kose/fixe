#ifndef FIXE_TYPES_H
#define FIXE_TYPES_H

#include <stdint.h>

// Real
typedef struct fixe16_t // val: value in M.Q fixed point format (M is extracted from total bit count and Q)
{
    uint16_t Q:3;
    int16_t val:13;
} fixe16_t;

#define FIXE16_MAX (int16_t)4095;
#define FIXE16_MIN (int16_t)-4096;

typedef struct fixe32_t // val: value in M.Q fixed point format (M is extracted from total bit count and Q)
{
    uint32_t Q:4;
    uint32_t val:28;
} fixe32_t;
#define FIXE32_MAX (int32_t) 67108863
#define FIXE32_MIN (int32_t) -67108864

typedef struct fixe64_t // val: value in M.Q fixed point format (M is extracted from total bit count and Q)
{
    uint64_t Q:5;
    int64_t val:59;
} fixe64_t;
#define FIXE64_MAX (int64_t)288230376151711743
#define FIXE64_MIN (int64_t)-288230376151711744

// Complex
typedef struct fixe16c_t // real, imag: values in M.Q fixed point format (M is extracted from total bit count and Q)
{
    uint32_t Q:4;
    int32_t real:14;
    int32_t imag:14;
} fixe16c_t;
#define FIXE16C_MAX (int32_t)8191
#define FIXE16C_MIN (int32_t)-8192

typedef struct fixe32c_t // real, imag: values in M.Q fixed point format (M is extracted from total bit count and Q)
{
    uint64_t Q:4;
    int64_t real:30;
    int64_t imag:30;
} fixe32c_t;
#define FIXE32C_MAX (int64_t)536870911
#define FIXE32C_MIN (int64_t)-536870912

typedef struct fixe64c_t // real, imag: values in M.Q fixed point format (M is extracted from total bit count and Q)
{
    __uint128_t Q:6;
    __int128_t real:61;
    __int128_t imag:61;
} fixe64c_t;
#define FIXE64C_MAX (__int128_t)1152921504606846975
#define FIXE64C_MIN (__int128_t)-1152921504606846976

#endif