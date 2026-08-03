#include <stdio.h>
int main()
{

    float p; // principal amount
    float r; // rateb of interest
    int t;   // time in years;

    printf("Enter the principal amount\n");
    scanf("%f", &p);

    printf("Enter the rate of interest\n");
    scanf("%f", &r);

    printf("Enter the time in years\n");
    scanf("%d", &t);

    printf("The simple interest is %f\n", (p * r * t) / 100);

    return 0;
}