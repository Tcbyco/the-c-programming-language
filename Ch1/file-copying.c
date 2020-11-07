#include <stdio.h>

/**
* read a character
* while (character is not end-of-line indicator)
*   output the character just read
*   read a character
*/

/* copy input to output, first version*/
void inToOut1()
{
  // int used because c must also be big enough
  // to store the EOF value. EOF is an int.
  // EOF is defined in stdio.h
  int c;
  c = getchar();
  while (c != EOF)
  {
    putchar(c);
    c = getchar();
  }
}

// copy input to output, second version
// note: must press enter to send input stream
void inToOut2()
{
  int c;

  while ((c = getchar()) != EOF)
  {
    putchar(c);
  }
}
int main()
{
  // exercises: print EOF value
  // verify the expression getchar() != EOF is 0 or 1
  int boolTest = getchar() != EOF;
  printf("EOF is %d\n", EOF);
  printf("EOF is not getchar(): %d\n", boolTest);
}