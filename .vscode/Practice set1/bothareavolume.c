#include <stdio.h>
int main()
{

    int r = 6;            // radius
    int h = 10;           // height
    float π = 22.0 / 7.0; // pi valuec

    printf("area of circle with radius %d is %f\n", r, π * r * r);
    printf("volume of cylinder with radius %d and height %d is %f", r, h, π * r * r * h);

    return 0;
}