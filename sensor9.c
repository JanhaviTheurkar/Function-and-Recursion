#include<stdio.h>

float circle(float radius);

int main(){

    float r;

    printf("Enter radius:",r);
    scanf("%f",&r);

    printf("Area of cricle=%f",circle(r));

    return 0;
}

float circle(float radius){
    return 3.14 * radius * radius;
}