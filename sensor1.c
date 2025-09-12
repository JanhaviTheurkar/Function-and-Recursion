#include<stdio.h>

//Function declaracation

int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int div(int a, int b);


int main(){

    //Function call

    int sensor1=30, sensor2=50;

    printf("Sensor=%d \n",sensor1);
    printf("Sensor=%d \n",sensor2);


    printf("Sum=%d \n",add(sensor1,sensor2));
    printf("difference=%d \n",sub(sensor1,sensor2));
    printf("Multipication=%d \n", mul(sensor1,sensor2));
    printf("Division=%d", div(sensor1,sensor2));

    return 0;
}


//Function define

int add(int a, int b){
    return a + b;
}

int sub(int a, int b){
    return a - b;
}

int mul(int a, int b){
    return a * b;
}

int div(int a, int b){
    return a / b;
}