//Title: Century finder
//Description: Takes a year as input and prints it's century
#include <stdio.h>

int main(){
  int year,century;

  printf("Enter a year");
  scanf("%d",&year);

  if (year >= 2000 && year < 2100)
  {
   printf("This year belongs to the 21st century");
  }
  else
  {
   century = (year/100) + 1;
   printf("%d", century);
   printf("th century");
  }
}
