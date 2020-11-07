#include <stdio.h>

/*Print Fahrenheit-Celsius table */
int main()
{
  int fahr;

  printf("Fahrenheit to Celsius Table, 0F - 300F\n");

  for (fahr = 0; fahr <= 300; fahr = fahr + 20)
  {
    printf("%3d %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
  }

  printf("Fahrenheit to Celsius Table, 300F - 0\n");

  for (fahr = 300; fahr >= 0; fahr = fahr - 20)
  {
    printf("%3d %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
  }
}