#include <stdio.h>

int main(){
    const double PI = 3.14159;
    double radius;

    printf("What is the radius of the circle?\n");
    scanf("%lf", &radius);

    double circumference = 2*(radius * PI);
    double area = PI * radius * radius;

    printf("circumference: %lf\n", circumference);
    printf("area: %lf\n",area);
}