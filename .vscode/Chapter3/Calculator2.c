#include<stdio.h>
int main() {

    int num1,num2;
    printf("Enter the value of num1 and num2\n");
    scanf("%d%d",&num1,&num2);
    float a;

    
    char c;
    printf("select the symbol('+,-,*,/') :");
    scanf(" %c",&c);

    if(c == '+'){
printf("%d",num1+num2);
}
    else if(c == '-')
    {
        printf("difference is %d\n", num1 - num2);
    }
    else if (c == '*')
    {
        printf("product is %d\n", num1 * num2);
    }
    else if (c == '/')
    {
        printf("division is %d\n", num1 / num2);
    }


    return 0;
}

    

