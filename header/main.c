#include <stdio.h>
#include "SayBob.h"

int main(){
    int x;

    printf("How much time do you want to see bob's name ");
    scanf("%d",&x);
    SayBob(x);
}

