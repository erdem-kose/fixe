#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#include "../../fixe.h"

float fixe32_tofloat(fixe32_t a)
{
    uint8_t Q;

    Q=(a.Q>31)?31:a.Q;

    return ((float)a.val / (float)(1 << Q));
}
