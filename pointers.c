#include <stdio.h>

void printAge(int *pAge){
    printf("You are %d year old\n", *pAge); //dereference
}

int main(){

    int age = 17;
    int *pAge = NULL; //Good practice to assign NULL when declaring a pointer
    pAge = &age;
    //printf("%d value and %p address\n", age, &age);
    //printf("%p value of pAge\n", pAge);
    //printf("address of stored pointer %d \n", *pAge); // dereference

    printAge(pAge);
    return 0;
}