#ifndef FIXE_TYPES_H
#define FIXE_TYPES_H

#include <stdint.h>

// Real
typedef struct fixe8_t // val: value in M.Q fixed point format
{
    int8_t val;
    uint8_t M;
    uint8_t Q;
} fixe8_t;

typedef struct fixe16_t // val: value in M.Q fixed point format
{
    int16_t val;
    uint8_t M;
    uint8_t Q;
} fixe16_t;

typedef struct fixe32_t // val: value in M.Q fixed point format
{
    int32_t val;
    uint8_t M;
    uint8_t Q;
} fixe32_t;

typedef struct fixe64_t // val: value in M.Q fixed point format
{
    int64_t val;
    uint8_t M;
    uint8_t Q;
} fixe32_t;

// Complex
typedef struct fixe8c_t // real, imag: values in M.Q fixed point format
{
    int8_t real;
    int8_t imag;
    uint8_t M;
    uint8_t Q;
} fixe8c_t;

typedef struct fixe16c_t // real, imag: values in M.Q fixed point format
{
    int16_t real;
    int16_t imag;
    uint8_t M;
    uint8_t Q;
} fixe16c_t;

typedef struct fixe32c_t // real, imag: values in M.Q fixed point format
{
    int32_t real;
    int32_t imag;
    uint8_t M;
    uint8_t Q;
} fixe32c_t;

typedef struct fixe64c_t // real, imag: values in M.Q fixed point format
{
    int64_t real;
    int64_t imag;
    uint8_t M;
    uint8_t Q;
} fixe64c_t;

#endif