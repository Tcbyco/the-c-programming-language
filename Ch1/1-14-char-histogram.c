#include <stdio.h>

// display frequency histogram of digits, white space, letters, other
// count lower and upper case letters together

int main()
{
  int c, i, characters[36], whiteCount, otherCount;
  whiteCount = otherCount = 0;

  for (i = 0; i < 36; i++)
  {
    characters[i] = 0;
  }

  // count each character
  while ((c = getchar()) != EOF)
  {
    if (c >= 'A' && c <= 'Z')
    {
      ++characters[c - 'A' + 10];
    }
    else if (c >= 'a' && c <= 'z')
    {
      ++characters[c - 'a' + 10];
    }
    else if (c >= '0' && c <= '9')
    {
      ++characters[c - '0'];
    }

    else if (c == ' ' || c == '\n' || c == '\t')
    {
      ++whiteCount;
    }
    else
    {
      ++otherCount;
    }
  }

  // determine histogram height
  int highestCount = 0;
  for (i = 0; i < 36; ++i)
  {
    if (characters[i] > highestCount)
    {
      highestCount = characters[i];
    }
  }
  if (highestCount < otherCount)
  {
    highestCount = otherCount;
  }
  if (highestCount < whiteCount)
  {
    highestCount = whiteCount;
  }

  printf("Frequency Histogram of Character Frequency\n");
  for (int currentLine = highestCount; currentLine > 0; --currentLine)
  {
    printf("%5d|", currentLine);
    for (int i = 0; i <= 36; i++)
    {
      if (characters[i] >= currentLine)
      {
        printf(" X");
      }
      else
      {
        printf("  ");
      }
    }
    if (whiteCount >= currentLine)
    {
      printf(" X");
    }
    else
    {
      printf("  ");
    }
    if (otherCount >= currentLine)
    {
      printf("     X");
    }
    printf("\n");
  }
  printf("       0 1 2 3 4 5 6 7 8 9 a b c d e f g h i j k l m n o p q r s t u v w x y z blank other \n");
  printf("       Character    \n");
}