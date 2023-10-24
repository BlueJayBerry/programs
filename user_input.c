#include <stdio.h>
#include <string.h>

int main(){

    char name[25];
    int age;

    printf("What's your name");
    //scanf("%s",&name);
    fgets(name, 25, stdin);
    name[strlen(name)-1] = '\0'; // take \n from out of string

    printf("How old are you");
    scanf("%d", &age);

    printf("You are %d years old\n", age);
    printf("and your name is %s", name);
}