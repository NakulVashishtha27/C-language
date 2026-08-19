#include <stdio.h>
int main()
{
    float num1, num2;

    printf("enter a num1 and num2\n");
    scanf("%f %f", &num1, &num2);

    char c;
    printf("Enter a symbol('+,-,*,/') :");
    scanf(" %c", &c);

    switch (c)
    {
    case '+':
        printf("sum of a and b is %f\n", num1 + num2);
        break;
    case '-':
        printf("difference is %f\n", num1 - num2);
        break;
    case '*':
        printf("product is %f\n", num1 * num2);
        break;
    case'/':
        printf("dividion is %f", num1 / num2);
        break;

        return 0;
    }
    return 0;
}