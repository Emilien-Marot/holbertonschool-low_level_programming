#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	long int f = 612852475143;
	long int max_f;
	long int i;

	for(i = 2; i <= f; i++)
	{
		while (f % i == 0)
		{
			f = f / i;
			max_f = i;
		}
	}

	printf("%ld\n", max_f);
	return (0);
}
