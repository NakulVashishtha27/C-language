// Write a program to check whether a given number is prime or not using loops.

#include<stdio.h>
int main()
{
    int i=1;
    int n=0;
    printf("Enter a number to check if it is prime: ");
    scanf("%d",&n);
    
    for(i=2; i<n; i++)
    {
      if(n%i==0)
      {
        printf("%d is not a prime number",n);
        break;
      }
    }

    if(i == n && n > 1)
    {
      printf("%d is a prime number",n);
      
    } 
    else if (n%i!=0 && n > 1)
    {
      printf("%d is a prime number",n);
    }
    
    return 0;
}