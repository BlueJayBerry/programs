//Title: Percentage grade
/*Description: Takes the percentage grade as input and print out a comment based on the criteria */

#include <stdio.h>

int main(){
	int grade;

	printf("Enter a grade percentage");
	scanf("%c", &grade);

	if (grade >= 85 || grade <= 100) 
	{
		printf("EXCELLENT");
	}
	else if (grade >= 75 || grade == 84)
	{
		printf("VERY GOOD");
	}
	else if (grade >= 65 || grade <= 74)
	{
		printf("GOOD");
	}
	else if (grade >= 55 || grade <= 64)
	{
		printf("SATISFACTORY/FAIR");
	}
	else if (grade >= 45 || grade <= 54)
	{
		printf("WEAK");
	}
	else if (grade >= 35 || grade <= 44)
	{
		printf('POOR');
	}
	else if (grade >= 0 || grade <= 34)
	{
		printf("YOU ARE EXPELLED!");
	}
	else
	{
		printf("INVALID INPUT");
	}
}
