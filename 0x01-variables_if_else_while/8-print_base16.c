#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * Description: Prints all base 16
 * with lower case letters
 * starting from 0, followed by a new line
 * Return: 0
 */
int main(void)
{
	char ch;

	for (ch = '0'; ch <= '9'; ch++)
	{
		putchar(ch);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
