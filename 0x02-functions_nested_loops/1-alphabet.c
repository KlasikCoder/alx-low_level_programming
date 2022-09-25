#include "main.h"

/**
 *
 * void print_alphabet - prototype
 * Print alphabet entry point
 * Return: 0
 *
 */
void print_alphabet(void)
{
	char c = 'a';
	while (c <= 'z')
	{
		_putchar (c);
		c++;
	}
	_putchar('\n');

}
