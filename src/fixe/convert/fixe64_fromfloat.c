#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#include "../../fixe.h"

fixe64_t fixe64_fromfloat(double a, uint8_t Q)
{
    fixe64_t b;

    b.Q=(Q>58)?58:Q;
    b.val=(int64_t)round(a * (double)((int16_t)1<<b.Q));

    return b;
}