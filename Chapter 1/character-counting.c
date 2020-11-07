#include <stdio.h>

int main()
{
  /*
  count characters in input; 1st version
  */

  // using a long int as this number could easily
  // become huge
  long nc;

  nc = 0;

  while (getchar() != EOF)
  {
    ++nc;
  }

  // ld === long int
  printf("%ld\n", nc);

  /*
  count characters in input; 2nd version
  */

  double nc2;

  for (nc2 = 0; getchar() != EOF; ++nc2)
    ; // null statement
  // f is used for floats AND double, so we need to
  // suppress printing of the decimal point and faction
  printf("%.0f\n", nc2);
}