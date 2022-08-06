#ifndef FIXE_H_
#define FIXE_H_

#include "fixe/types.h"

// Conversion
fixe32_t fixe32_fromfloat(float a, uint8_t Q);
float fixe32_tofloat(fixe32_t a);

// Addition
fixe8_t fixe8_add(fixe8_t a, fixe8_t b);
fixe16_t fixe16_add(fixe16_t a, fixe16_t b);
fixe32_t fixe32_add(fixe32_t a, fixe32_t b);

#endif
