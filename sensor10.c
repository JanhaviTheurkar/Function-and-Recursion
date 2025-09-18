#include<stdio.h>

float rectangle(float a, float b);

int main(){

    float a;
    float b;

    printf("Enter side a:",a);
    scanf("%f",&a);

    printf("Enter side b:",b);
    scanf("%f",&b);

    printf("Area od Rectangle=%f",rectangle(a, b));

    return 0;
}

float rectangle(float a ,float b){
    return a * b;
}