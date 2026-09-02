#include <stdio.h>
int main()
{

    int a, b, c, d;
    printf("the value of a,b,c,d is :\n");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    if (a > b && a > c && a > d)
    {
        printf("A is greater value");
    }
    else if (b > a && b > c && b > d)
    {
        printf("B is greater value");
    }
    else if(c>a && c>b && c>d){

        printf("C is greater value");
    }
    else if(d>a && d>b && d>c)
    {
        printf("D is greater value");
    }
    else if(a==b || a==c || a==d || b==c || b==d || c==d)
    {
        printf("All values are equal");
    }
    
    
}
