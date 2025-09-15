#include<stdio.h>

//Function declaracation

void printhello();
void printgoodbye();

int main(){

// Function call

    printhello();
    printgoodbye();

    printhello();
    printgoodbye();

    return 0;
}

// Function define

void printhello(){
    printf("Hello \n");
}

void printgoodbye(){
    printf("Goodbye \n");
}