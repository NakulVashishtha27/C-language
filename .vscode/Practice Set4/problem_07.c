// Write a program to calculate the factorial of a given number using a for loop
// eg -- 5! = 5 * 4 * 3 * 2 * 1 = 120

#include <stdio.h>

int main()
{
     int fact = 1;
   
    int n;
    printf("Enter the number to calculate factorial: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        
        fact = fact * i;
    }
    printf("The factorial is %d", fact);
    return 0;
}