#include <stdio.h>
/**
 *main - main block
 *Description: Prints alphabet in lower case and uppercase
 *followed by a new line
 *Return: 0
 */
int main(void)
{
  char c = 'a';

  while (c <= 'z')
    {
      putchar(c);
      c++;
    }

  c = 'A';

  while (c <= 'Z')
    {
      putchar(c);
      c++;
    }
  putchar('\n');
  return (0);
}