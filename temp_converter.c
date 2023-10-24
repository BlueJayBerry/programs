#include <stdio.h>
#include <ctype.h>

int main(){
    char unit;
    float temp;

    printf("\nIs the temperature (F) or (C)?:");
    scanf("%c",&unit);

    unit = toupper(unit);

    if(unit == 'C'){
        printf("Enter a temp in Celsius: ");
        scanf("%f", &temp);
        temp = (temp * 9 / 5) + 32;
        printf("The temp in fahrenheit is: %.1f\n", temp);
    }
    else if(unit == 'F'){
        printf("Enter a temp in fahrenheit: ");
        scanf("%f",&temp);
        temp = (temp - 32) * 5 / 9;
        printf("The temp in celsius is: %.1f\n", temp);
    }
    else{
        printf("\n%c is not valid", unit);
    }



}