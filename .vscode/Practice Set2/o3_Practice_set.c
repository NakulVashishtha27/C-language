#include <stdio.h>

int main()
{
    // Calculate 3*x/y-z+k , where x = 2 , y = 3 , z = 3 , k = 1 .
    int x = 2, y = 3, z = 3, k = 1;
    float a = 3 * x / y - z + k;
    printf("the value of a is %f \n", a);

    // Solution
    // 3*x/y-z=k = 3*2/y-z+k = 6/y-z+k
    // 2-3+k
    // -1+k
    // 0

    return 0;
}
