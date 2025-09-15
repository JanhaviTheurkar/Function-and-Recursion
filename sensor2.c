#include<stdio.h>

//Function declaration

int add(int a, int b);
int sub(int a, int b);

int main(){

    //Function call

    int sensor1, sensor2;

    printf("Enter sensor1=",sensor1);
    scanf("%d",&sensor1);

    printf("Enter sensor2=",sensor2);
    scanf("%d",&sensor2);
    printf("additon=%d \n", add(sensor1,sensor2));
    printf("Subraction=%d \n",sub(sensor1,sensor2));

    return 0;
}

//Function define

int add(int a, int b){
    return a+ b;
}

int sub(int a, int b){
    return a - b;
}