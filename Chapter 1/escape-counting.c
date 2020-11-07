#include <stdio.h>

int main()
{
  // count blanks, tabs, newlines

  int c;
  int count = 0;

  while ((c = getchar()) != EOF)
  {
    if (c == '\t')
    {
      ++count;
      printf("Tab inputted\n");
    };

    if (c == '\n')
    {
      ++count;
      printf("Newline inputted\n");
    }

    if (c == ' ')
    {
      ++count;
      printf("Blank inputted\n");
    }

    printf("Tab, Newline, Blank  count: %d\n", count);
  }
}