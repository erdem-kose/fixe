#ifndef FIXE_H_
#define FIXE_H_

#include "fixe/types.h"

// Conversion
fixe16_t fixe16_fromfloat(float a, uint8_t Q);
fixe32_t fixe32_fromfloat(float a, uint8_t Q);
fixe64_t fixe64_fromfloat(float a, uint8_t Q);

float fixe16_tofloat(fixe16_t a);
float fixe32_tofloat(fixe32_t a);
float fixe64_tofloat(fixe64_t a);

// Addition

fixe16_t fixe16_add(fixe16_t a, fixe16_t b);
fixe32_t fixe32_add(fixe32_t a, fixe32_t b);

#endif
