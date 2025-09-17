#include<stdio.h>

float square(float side);

int main(){

    float a;
     
    printf("Enter side:",a);
    scanf("%f",&a);

    printf("Area of square=%f",square(a));

    return 0;
}

float square(float side){
    return side * side;
}