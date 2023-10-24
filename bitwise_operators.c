#include <stdio.h>

int main(){

    int x = 13; //  6 - 00001101
    int y = 10; // 10 - 00001010
    int z = 0;  //  0 - 00000000

	z = x & y;
	printf("AND: %d\n",z);
	z = x | y;
	printf("OR: %d\n",z);
	z = x ^ y;
	printf("XOR: %d\n",z);
	z = y << 3;
	printf("Left shift: %d\n",z);
	z = y >> 3 ;
	printf("Right shift: %d\n",z);

    return 0;
}