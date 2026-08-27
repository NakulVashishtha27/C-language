#include <stdio.h>

int main()
{
    int income, tax = 0.0;

    printf("Enter your income: ");
    scanf("%d", &income);

    if (income > 1000000.0)
    {
        tax = (income - 1000000.0) * 0.30;
        tax += 500000.0 * 0.20;
        tax += 250000.0 * 0.05;
    }
    else if (income > 500000.0)
    {
        tax = (income - 500000.0) * 0.20;
        tax += 250000.0 * 0.05;
    }
    else if (income > 250000.0)
    {
        tax = (income - 250000.0) * 0.05;
    }

    printf("Income tax: %d\n", tax);
    return 0;
}
