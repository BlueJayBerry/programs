//Title: Number of days
//Description: Take a month as input and print the number of days in that month.

#include <stdio.h>

int main(){
  int month;

  printf("ENTER a number that corresponds with the desired month: 1. Jan \n 2. Feb \n 3. Mar \n 4. Apr \n 5. May \n 6. Jun \n 7. Jul \n 8. Aug \n 9. Sep \n 10. Oct \n 11. Nov \n 12. Dec \n");
  scanf("%d", month);

  if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
  {
    printf("This month has 31 days");
  }
  else if (month == 4 || month == 6 || month == 9 || month == 11)
  {
    printf("This month has 30 days");
  }
  else if (month == 2)
  {
    printf("This month 28 days, but 29 days in a leap year");
  }
  else
  {
    printf("INVALID INPUT");
  }
}
