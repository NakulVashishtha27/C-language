#include<stdio.h>
int main(){

    // zero(0) concider as false statement so it will not execute the statement inside if block

    if(1){
        printf("value is executed when the value is non zero\n");
    }

if(2.1){
    printf("value is executed when the value is non zero\n");

}
if('c'){
printf("value is executed when the value is non zero\n");
}
if(0){
printf("this value is not executed");
}

}