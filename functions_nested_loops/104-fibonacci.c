#include "main.h"
#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long int sum1;
	unsigned long int sum10;
	unsigned long int max = 10000000000000000;
	unsigned long int n10 = 0;
	unsigned long int n1 = 1;
	unsigned long int n20 = 0;
	unsigned long int n2 = 2;
	int i;

	for (i = 0; i < 98; i++)
	{
		if (i != 0)
			printf(", ");
		if (n10 > 0)
			printf("%lu%lu", n10, n1);
		else
			printf("%lu", n1);
		sum10 = n10 + n20 + ((n1 + n2) / max);
		sum1 = (n1 + n2) % max;
		n1 = n2;
		n10 = n20;
		n2 = sum1;
		n20 = sum10;
	}
	printf("\n");
	return (0);
}
