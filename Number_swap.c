//Title: Number swap
//Description: Take two numbers from user and swap their values without using a third variable.
#include <stdio.h>

int main(){
  int num1, num2;

  printf("Enter the first number");
  scanf("%d", &num1);
  printf("Enter the second number");
  scanf("%d", &num2);

  if (num1 != num2)
  {
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;
  }

  printf("Number 1: ");
  printf("%d", num1);
  printf("Number 2: ");
  printf("%d", num2);

}
