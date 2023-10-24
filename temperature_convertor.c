//Title:Temperature converter
//Description: Takes temperature in Celsius as input and converts it Fahrenheit when the temp is positive and to Kelvin if temp is negative and print "No conversion needed" when the temp is zero.
#include <stdio.h>

int main(){
  float temp;

  printf("Enter a temp");
  scanf("%f", &temp);

  if (temp > 0)
  {
    temp = (temp * 1.8) + 30;
    printf("%f", temp);
  }
  else if (temp < 0)
  {
  temp = temp + 273.15;
  printf("%f",temp);
  }
  else if (temp == 0)
  {
    printf("No conversion needed");
  }
}
