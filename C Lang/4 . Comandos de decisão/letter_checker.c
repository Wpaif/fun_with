#include <stdio.h>
#include <ctype.h>

int main(void)
{
  char letter;
  printf("Type a letter: ");
  scanf("%c", &letter);

  if (isalpha(letter))
  {
    switch (letter)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
      if (islower(letter))
        printf("Lower case and vowel.\n");
      else if (isupper(letter))
        printf("Upper case and vowel.\n");
      break;
    default:
      if (islower(letter))
        printf("Lower case and consonant.\n");
      else if (isupper(letter))
        printf("Upper case and consonant.\n");
      break;
    }
  }
}