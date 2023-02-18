#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - Entry point
 *Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d", n);
		printf(" is positive");
	}
	else if (n == 0)
	{
		printf("%d", n);
		printf(" is zero");
	}
	else if (n < 0)
	{
		printf("%d", n);
		printf(" is negative");
	}

	return (0);
}
