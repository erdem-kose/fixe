#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#include "../fixe.h"

fixe32_t fixe32_fromfloat(float a, uint8_t Q)
{
    fixe32_t b;

    b.Q=(Q>31)?31:Q;
    b.val=(int32_t)round(a * (float)(1<<b.Q));

    return b;
}

float fixe32_tofloat(fixe32_t a)
{
    uint8_t Q;

    Q=(a.Q>31)?31:a.Q;

    return ((float)a.val / (float)(1 << Q));
}
