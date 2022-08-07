#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#include "../../fixe.h"

float fixe64_tofloat(fixe64_t a)
{
    uint8_t Q;

    Q=(a.Q>58)?58:a.Q;

    return ((float)a.val / (float)(1 << Q));
}