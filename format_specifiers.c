#include <stdio.h>

int main(){
    float item1 = 5.75;
    float item2 = 100.00;
    float item3 = 150.155;
    char x = '#';
    printf("Item 1: $%-15.2f\nItem 2: $%100.2f\nItem 3: $%8.2f\n", item1, item2,item3);

    printf("%c%c%c%c%c\n%-4c%c\n%-4c%c\n%c%c%c%c%c\n",x,x,x,x,x,x,x,x,x,x,x,x,x,x);
}