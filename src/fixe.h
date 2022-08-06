#ifndef FIXE_H_
#define FIXE_H_

#include "fixe/types.h"

fixe32_t fixe32_fromfloat(float a, uint8_t Q);
float fixe32_tofloat(fixe32_t a);

fixe8_t fixe_add8(fixe8_t a, fixe8_t b);
fixe16_t fixe_add16(fixe16_t a, fixe16_t b);

#endif
