#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#include "../../fixe.h"

fixe16_t fixe16_fromfloat(float a, uint8_t Q)
{
    fixe16_t b;

    b.Q=(Q>12)?12:Q;
    b.val=(int32_t)round(a * (float)(1<<b.Q));

    return b;
}