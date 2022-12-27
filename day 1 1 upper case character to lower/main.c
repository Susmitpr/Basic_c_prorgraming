#include <stdio.h>
#include <stdlib.h>
#include<assert.h>
int upper_to_lower(char upper);
int main()
{
    char upper;
    assert(upper_to_lower('A')=='a');
    //char low = upper_to_lower(upper);
    //printf("lower is %c",low);
    return 0;
}

int upper_to_lower(char upper)
{
    char lower;
    lower = upper+32;
    return lower;

}

