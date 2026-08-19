#include <stdio.h>
int main()
{

    float num1, num2;
    printf("enter the value of num1 and num2\n");
    scanf("%f %f", &num1, &num2);

    char c;
    printf("Enter a symbol('+,-,*,/') :\n");
    scanf(" %c", &c);

    if (c == '+')
    {
        printf("sum is %f\n", num1 + num2);
    }
    else if (c == '-')
    {
        printf("difference is %f\n", num1 - num2);
    }
    else if (c == '*')
    {
        printf("product is %f\n", num1 * num2);
    }
    else if (c == '/')
    {
        printf("division is %f\n", num1 / num2);
    }


    return 0;
}