// Write a program to implement program 5 using for and do-while loop.??

#include<stdio.h>
int main(){
    int i=1, sum=0;
    // while(i<=10) {
    //     sum+=i;
    //     i++;
    // }
    // printf("Sum of first 10 natural numbers is: %d\n", sum);


// for(i=1; i<=10; i++ ){
//     sum +=i;
// }
// printf("Sum of first 10 natural numbers using for loop is: %d\n", sum);

do
{
    sum += i;
    i++;
} while (i <= 10);
printf("Sum of first 10 natural numbers using do-while loop is: %d\n", sum);



}