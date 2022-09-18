#include <stdlib>
#include <stdio.h>
#include <time.h>
/**
 * main - check if a random number is positive or negative
 * Return: 0 if error
 */
int main (void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX /2;
	if (n > 0)
		printf("%i is positive\n", n);
	else if (n < 0)
		printf("%i is negative\n", n);
	else
		printf("%i is zero\n", n);
	
	return (0);
}
