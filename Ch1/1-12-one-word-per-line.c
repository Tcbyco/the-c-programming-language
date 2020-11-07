#include <stdio.h>

#define IN 1  // inside a word
#define OUT 0 // outside a word

int main(void)
{
  int ch, state;

  state = OUT;

  while ((ch = getchar()) != EOF)
  {
    if (ch == ' ' || ch == '\n' || ch == '\t')
    { // its a space or newline
      state = OUT;
    }
    else if (state == OUT) // character + OUT
    {
      printf("\n");
      putchar(ch);
      state = IN;
    }
    else // its a character and we are IN
    {
      putchar(ch);
    }
  }
}