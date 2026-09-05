// 2. Write a program to print multiplication table of 10 in reversed order.

#include<stdio.h>
int main(){
    int n =10;
    printf("Multiplication table of 10 in reversed order:\n");
    for(int i=10; i; i--){
        printf("%d x %d = %d\n", n, i, n*i);
    }



    return 0;
}