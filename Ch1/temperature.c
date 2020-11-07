#include <stdio.h>
/* Print Fahrenheit - Celsius table
  for fahr = 0, 20, ..., 300 */
int main()
{
  float fahr, celsius;
  int lower, upper, step;

  lower = 0;   // lower limit of temperature table
  upper = 300; // upper limit
  step = 20;   // step size

  fahr = lower;
  printf("Fahrenheit to Celsius Conversion\n");
  while (fahr <= upper)
  {
    celsius = (5.0 / 9.0) * (fahr - 32.0);
    /* print each line, keeping the values right-justified.
       fahr should be at least 3 chars wide with no decimal place
       celsius should be at least 6 chars wide with 1 decimal place
    */
    printf("%3.0f\t%6.1f\n", fahr, celsius);
    fahr = fahr + step;
  }
}