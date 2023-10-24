#include <stdio.h>
#include <math.h>

int main(){
    double a;
    double b;
    double c;
    double cTimesC;
    printf("\nSide A: ");
    scanf("%lf", &a);
    printf("\nSide B: ");
    scanf("%lf", &b);

    cTimesC = a*a + b*b;

    c = sqrt(cTimesC);

    printf("Hypotenuse: %lf", c);
}