#include <stdio.h>

int main(){
    int d[3];
    double b = 'y';
    char a = 'x';
    double c = 'z';

    printf("%ld bytes\n", sizeof(d));
    printf("%p", &d);

    printf("%lf bytes\n", sizeof(a)); 
    printf("%lf bytes\n", sizeof(b));
    printf("%lf bytes\n", sizeof(c));

    printf("%p address of a\n", &a);
    printf("%p address of b\n", &b);
    printf("%p address of c\n", &c);

    printf("%c", 0x7fff68200377);
    return 0;
}