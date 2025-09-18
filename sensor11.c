#include<stdio.h>

float subject(float maths, float english, float sci);

int main(){

    float math, sci, eng;

    printf("Enter english marks:",eng);
    scanf("%f",&eng);

    printf("Enter maths marks:",&math);
    scanf("%f",&math);

    printf("Enter sci marks:",sci);
    scanf("%f",&sci);

    printf("Total Percentage is=%f", subject(math,eng,sci));

    return 0;
}

float subject(float maths, float english, float sci){

    return (maths + english + sci) / 3 ;
}