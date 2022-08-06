#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#include "../../fixe.h"

fixe32_t fixe32_add(fixe32_t a, fixe32_t b)
{
    fixe32_t c;


    int16_t Qdiff=a.Q-b.Q;
    if(Qdiff>0)
    {
        a.Q-=Qdiff;
        a.val=a.val>>Qdiff;
    }
    else if(Qdiff<0)
    {
        b.Q-=abs(Qdiff);
        b.val=b.val>>abs(Qdiff);
    }

    c.Q=a.Q;

    uint64_t add=a.val+b.val;
    
    c.val=(add>UINT32_MAX)?UINT32_MAX:add;

    return c;
}