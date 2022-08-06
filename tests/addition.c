#include <math.h>
#include <stdio.h>
#include "../src/fixe.h"
#include "tests.h"

void test_addition()
{
    float a=M_PI;
    float b=M_PI;

    printf("Float Point: %0.10f, %0.10f\n", a, b);

    fixe32_t c = fixe32_fromfloat(a,19);
    fixe32_t d = fixe32_fromfloat(a,21);

    printf("Fixed Point: %d, %d \n", c.val, d.val);

    c=fixe32_add(c, d);
    float e = fixe32_tofloat(c);

    printf("Float Point (sum): %0.10f\n", e);
}