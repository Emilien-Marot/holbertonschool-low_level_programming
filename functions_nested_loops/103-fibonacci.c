#include "main.h"
#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long int even = 0;
	unsigned long int sum;
	unsigned long int n1 = 1;
	unsigned long int n2 = 2;
	int i;

	for (i = 0; n1 <= 4000000; i++)
	{
		if (n1 % 2 == 0)
			even += n1;
		sum = n1 + n2;
		n1 = n2;
		n2 = sum;
	}
	printf("%lu\n", even);
	return (0);
}
