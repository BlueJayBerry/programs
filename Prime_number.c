/*Title:
  Description:
*/
#include <stdio.h>


int main(){
  int number;
  float root;

  printf("Enter a number");
  scanf("%d", &number);

  root = sqrt(number);

if (number == 2){
  printf("This is a prime number");
}
else if(root%2 == 0 || root%3 == 0 || root%5 == 0 || root%7 == 0 || root%11 == 0 || root%13 == 0 || root%17 == 0 || root%19 == 0){
  printf("This is not a prime number");
}


}
