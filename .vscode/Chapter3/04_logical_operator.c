#include <stdio.h>
int main()
{

    int a;
    int b;
    printf("The value of a and b is :\n");
   // printf("The value of b is :\n");
    scanf("%d%d", &a, &b);

    printf("The value of a and b is %d\n", a&&b);
    printf("The value of a or b is %d\n", a||b);
    printf("the vlaue of not(a)is %d" ,!a);

    return 0;
}