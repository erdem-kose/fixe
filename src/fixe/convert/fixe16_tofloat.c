#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#include "../../fixe.h"

float fixe16_tofloat(fixe16_t a)
{
    uint8_t Q;

    Q=(a.Q>12)?12:a.Q;

    return ((float)a.val / (float)(1 << Q));
}