#include <stdio.h>

void hello(char[], int); //function prototype

int main(){
    char name[] = "bob";
    int age = 21;

    hello(name, age);
}

void hello(char name[], int age){
    printf("\nHello %s", name);
    printf("\nYou are %d years old",age);
}