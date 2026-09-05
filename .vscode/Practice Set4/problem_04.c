/*
What can be done using one type of loop can also be done using the other two types
of loops – true or false?  */

#include <stdio.h>
int main()
{
    int i = 1;
    int sum = 0;
    while (i <= 10)
    {
        sum += i;
        i++;
    }
    printf("%d\n", sum);
    return 0;
}