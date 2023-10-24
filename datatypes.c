#include <stdio.h>
#include <stdbool.h>

int main(){
    double d = 3.22222222222222;
    bool e = true;
    char f = 67; //ASCII value %d character value %c (-128 to 127)
    unsigned char g = 255; //(0 to 255)

    short int h = 32769; // -32768 to 32767
    unsigned short int i = 65535; // 0 to 65535

    int j = 2147483647; // -2147483648 to 2147483647 %d
    unsigned int k = 4294967295; // 0 - 4,294,967,295 %u

    long long int l = 2742172137487185; // -9 quintillion to 9 quintillion %lld
    unsigned long long int m = 82748243232232758U; // 0 to 18 quintillon %llu
    //printf("%0.15lf\n", d);
    //printf("%d", e);
    //printf("%c",f);
    //printf("%c", g);
    //printf("%d\n", h);
    //printf("%d", i);
    //printf("%d\n",j);
    //printf("%u\n",k);
    //printf("%lld\n", l);
    //printf("%llu\n", m);

}