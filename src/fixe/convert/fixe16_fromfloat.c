#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#include "../../fixe.h"

fixe16_t fixe16_fromfloat(float a, uint8_t Q)
{
    fixe16_t b;

    b.Q=(Q>12)?12:Q;
    b.val=(int16_t)round(a * (float)((int16_t)1<<b.Q));

    return b;
}