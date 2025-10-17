#include "main.h"
#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	long int sum;
	long int n1 = 1;
	long int n2 = 2;
	int i;

	for (i = 0; i < 50; i++)
	{
		if (i != 0)
			printf(", ");
		printf("%ld", n1);
		sum = n1 + n2;
		n1 = n2;
		n2 = sum;
	}
	printf("\n");
	return (0);
}
