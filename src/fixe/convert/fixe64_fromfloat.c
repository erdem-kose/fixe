#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#include "../../fixe.h"

fixe64_t fixe64_fromfloat(float a, uint8_t Q)
{
    fixe64_t b;

    b.Q=(Q>58)?58:Q;
    b.val=(int32_t)round(a * (float)(1<<b.Q));

    return b;
}