#include <stdio.h>

void birthday(char name[], int age){
    printf("\nHi %s, nice to meet\n",name);
    printf("Oh you're %d years old\n",age);
}

int main(){
    char name[10] = "bob";
    int age = 23;
    birthday(name, age);
}