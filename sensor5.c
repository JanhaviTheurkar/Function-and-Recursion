#include<stdio.h>

//Function declaration

void Namaste();
void Bonjour();

int main(){

//Function call

    char ch;

    printf("Enter 'f' french & 'i' for indain:",ch );
    scanf("%c",&ch);

    if (ch=='i')
    {
        Namaste();
    }

    else{
        Bonjour();
    }
    
}

void Namaste(){
    printf("Namaste");
}

void Bonjour(){
    printf("Bonjour");
}