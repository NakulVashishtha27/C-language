#include <stdio.h>
int main()
{
    float r;              // radius
    float π = 22.0 / 7.0; // pi
    int h;                // height

    printf("the value of radius\n");
    scanf("%f", &r);
    printf("the value of height\n");
    scanf("%d", &h);

    printf("volume of cylinder is %f", π * r * r * h);
    return 0;
}
