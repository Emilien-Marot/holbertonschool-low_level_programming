#include "main.h"
#include <stdio.h>
/**
 * is_prime_number - blabla
 *
 * @n: abc
 *
 * Description: blabla
 * Return: blabla
 */
int is_prime_number(int n)
{
	int i;

	if (n < 2)
		return (0);
	for (i = 2; i < n / 2; i++)
	{
		if (n % i == 0)
			return (0);
	}
	return (1);
}
