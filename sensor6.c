#include<stdio.h>

//(45°C × 9/5) + 32 = 113°F

int temp(int a);

int main(){

    int temp1;

    printf("Enter temp in Celsius:",temp);
    scanf("%d",&temp1);

    printf("Temp in ferheniate is:%d", temp(temp1));
    return 0;

}

int temp(int a){
    
    return (a * 9 / 5) + 32;

    
}