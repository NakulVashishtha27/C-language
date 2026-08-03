#include<stdio.h>
int main () {
float celsius, fahrenheit;
printf("Enter the value of celsius\n");
scanf("%f", &celsius);

printf("The value of fahrenheit is %f\n", celsius * 9/5 + 32);
return 0;
}