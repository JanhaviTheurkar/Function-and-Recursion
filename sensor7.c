#include<stdio.h>

void Hello(int count);

int main(){
    Hello(5);  //call for 5 times

    return 0;
}

void Hello(int count){
  
    if(count==0){
        return;
    }
    printf("Hello \n");
    Hello(count-1);
}