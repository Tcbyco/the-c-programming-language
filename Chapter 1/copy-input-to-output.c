#include <stdio.h>

int main()
{
  // copy input to output, replacing each string of
  // one or more blanks by a single blank
  int c, last;

  while ((c = getchar()) != EOF)
  {
    if (c == ' ' && last == ' ')
    {
      ;
    }
    else
    {
      last = c;
      putchar(c);
    }
  }
}