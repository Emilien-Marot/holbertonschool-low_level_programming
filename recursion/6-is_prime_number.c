#include "main.h"

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
	if (n <= 1)
		return (0);
	return (prime_test(n, 2));
}

/**
 * prime_test - blabla
 *
 * @n: abc
 * @p: def
 *
 * Description: blabla
 * Return: blabla
 */
int prime_test(int n, int p)
{
	if (p == n)
		return (1);
	else if (n % p == 0)
		return (0);
	else
		return (prime_test(n, p + 1));
}
