#include "main.h"
#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long int sum;
	unsigned long int n1 = 1;
	unsigned long int n2 = 2;
	int i;

	for (i = 0; i < 98; i++)
	{
		if (i != 0)
			printf(", ");
		printf("%lu", n1);
		sum = n1 + n2;
		n1 = n2;
		n2 = sum;
	}
	printf("\n");
	return (0);
}
