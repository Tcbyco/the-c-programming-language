#include <stdio.h>

#define IN 1
#define OUT 0
#define MAXLENGTH 12 // maximal letters we will count in a word

int main(void)
{
  int c, i, state, letterCount;
  int wdlengths[MAXLENGTH];

  state = OUT;

  for (i = 0; i < 12; i++)
  {
    wdlengths[i] = 0;
  }
  // to begin with, we'll use max length of 12
  // alternate methods: make the array really big and cut it somehow at the end
  // make it fixed size, but if a bigger word is found, copy existing array into another array with room for the bigger word
  // count the letters in each word
  while ((c = getchar()) != EOF)
  {
    if (c == ' ' || c == '\n' || c == '\t')
    {
      state = OUT;
    }
    else if (state == OUT) // we have a new word
    {
      // increment array[count]
      // reset letter count to 1
    }
    else // we are still in a word
    {
      // increment letter count
    }
  }
  // increment the count of the array index
  // eg array[3] refers to num words with 3 letters

  // 2: print the array left to right, top to bottom
  // loop through array, looking for highest count
  int highestCount, column;
  for (i = 0; i < MAXLENGTH; i++)
  {
    ; // highestCount = ...
  }
  // then, print by looping from highest count
  // NOTE: currently only works when count and column numbers are equal.
  // must fix.
  // may need two loops
  for (i = highestCount, column = 1; i > 0; --i, column++)
  {
    ; // if array[j] >= i, putchar('x')
    // if (column == MAXLENGTH) {reset column to 1}
  }
}