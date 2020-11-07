#include <stdio.h>

int main()
{
  float celsius, fahr;
  float upper, lower, step;

  upper = 148.9;
  lower = -17.8;
  step = (upper - lower) / 16.0;

  celsius = lower;
  printf("Celsius to Fahrenheit Table\n");
  while (celsius <= upper)
  {
    fahr = celsius * 1.8 + 32;
    printf("%6.1f\t%3.0f\n", celsius, fahr);
    celsius = celsius + step;
  }
}