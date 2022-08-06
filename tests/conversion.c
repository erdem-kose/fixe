#include <math.h>
#include <stdio.h>
#include "../src/fixe.h"
#include "tests.h"

void test_conversion()
{
    float a=M_PI;

    printf("Float Point: %0.10f\n", a);

    fixe32_t b = fixe32_fromfloat(a,20);

    printf("Fixed Point: %d\n", b.val);

    float c = fixe32_tofloat(b);

    printf("Float Point: %0.10f\n", c);
}