#include <stdio.h>

#define IN 1
#define OUT 0
#define MAXLENGTH 12 // maximal letters we will count in a word

int main(void)
{
  int c, i;
  int wdLengths[MAXLENGTH];
  int currentWordLength = 0;
  int longestWord = 0;
  int state = OUT;

  // count frequency of each word length, and keep track of longest word.

  for (i = 0; i <= 12; i++)
  {
    wdLengths[i] = 0;
  }

  while ((c = getchar()) != EOF)
  {
    if (c == ' ' || c == '\n' || c == '\t' || c == '.')
    {
      state = OUT;
    }
    else if (state == OUT) // we have a new word. add previous one, then reset.
    {
      state = IN;
      ++wdLengths[currentWordLength];
      currentWordLength = 1;
    }
    else // we are still in a word
    {
      ++currentWordLength;
      if (currentWordLength > longestWord)
      {
        longestWord = currentWordLength;
      }
      // this loses the final word, because it isn't added until we reach a new word.
      // on EOF that won't happen.
    }
  }
  // add the last word that was cut off by EOF
  ++wdLengths[currentWordLength];

  // find the word length with the highest frequency
  int highestFreq = 0;
  for (i = 1; i < MAXLENGTH; i++)
  {
    if (wdLengths[i] > highestFreq)
    {
      highestFreq = wdLengths[i];
    }
  }
  // then, print by looping from highest count
  printf("Frequency Histogram of Word Length\n");
  for (int currentLine = highestFreq; currentLine > 0; --currentLine)
  {
    printf("%d |", currentLine);
    for (int i = 1; i <= MAXLENGTH; i++)
    {
      if (wdLengths[i] >= currentLine)
      {
        printf(" X");
      }
      else
      {
        printf("  ");
      }
    }
    printf("\n");
  }
  printf("    1 2 3 4 5 6 7 8 9 10 11 12\n");
  printf("      Letter Count    \n");
  printf("three: %d, four: %d", wdLengths[3], wdLengths[4]);
}