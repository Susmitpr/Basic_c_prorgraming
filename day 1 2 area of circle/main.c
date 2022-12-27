#include <stdio.h>
#include <stdlib.h>
#include<assert.h>
#include"function.h"
int main()
{
    float r=2;
    float temp2=PI*r*r;
    assert(area(r)== temp2);
   return 0;
}

