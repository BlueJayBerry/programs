//Title: Pass or Fail
/*Description: Takes a letter grade and determines if it's 
a passing or failing grade*/

#include <stdio.h>

//Variables
int main(){
	char grade;

	printf("Enter a letter grade");
	scanf("%c", &grade);

	if (grade == 'A' || grade == 'B' || grade == 'C') 
	{
		printf("This is a passing grade");
	}
	else if (grade == 'D' || grade == 'F')
	{
		printf("This is a failing grade");
	}
}
