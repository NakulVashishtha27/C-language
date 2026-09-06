/* 
Write a program to calculate the sum of the numbers occurring in the multiplication
table of 8 (consider 8 × 1 to 8 × 10). */

#include<stdio.h>
int main() {
int i=1, sum=0;
for(i=1; i<=10; i++){

    sum = sum+(8*i);
}

printf("Sum of the numbers occurring in the multiplication table of 8 is: %d\n", sum);
return 0;
}
