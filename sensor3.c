#include<stdio.h>

//Function declaration

int mul(int a, int b);
int div(int a, int b);

int main(){

//function call

    int sensor1, sensor2;

    printf("Enter sensor1=",sensor1);
    scanf("%d",&sensor1);

    printf("Enter sensor2=",sensor2);
    scanf("%d",&sensor2);

    printf("Multipication=%d \n", mul(sensor1,sensor2));
    printf("Division=%d \n",  div(sensor1,sensor2));

    return 0;
}

//function define

int mul(int a, int b){
    return a / b;
}

int div(int a, int b){
    return a * b;
}

