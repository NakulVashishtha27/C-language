#include <stdio.h>
int main()
{
    // + addition
    // - substraction
    // * multiplication
    // / division
    // % modulus

    int a ;
    int b ;
    scanf("%d%d", &a,&b);
    printf("the sum of a and b is %d\n ", a + b);
    printf("the difference of a and b is %d\n ", a - b);    
    printf("the product of a and b is %d\n ", a * b);
    printf("the division of a and b is %d \n", a / b);
    printf("the remainder of a and b is %d \n", a % b);

    return 0;
}