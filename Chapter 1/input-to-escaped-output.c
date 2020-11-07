#include <stdio.h>

int main()
{
  int ch;
  int out;

  while ((ch = getchar()) != EOF)
  {
    if (ch == '\t')
    {
      putchar('\\');
      out = 't';
    }
    else if (ch == '\b')
    {
      putchar('\\');
      out = 'b';
    }
    else if (ch == '\\')
    {
      putchar('\\');
      out = ch;
    }
    else
    {
      out = ch;
    }
    putchar(out);
  }
}