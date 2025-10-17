#include "main.h"

/**
 * print_number - blabla
 *
 * @n: abc
 *
 * Description: blabla
 * Return: blabla
 */
void print_number(int n)
{
	int n_test;
	int div = 1;

	if (n < 0)
	{
		_putchar('-');
		n = -1 * n;
	}
	n_test = n;
	while (n_test >= 10)
	{
		div = div * 10;
		n_test = n_test / 10;
	}
	while (div >= 1)
	{
		_putchar('0' + ((n / div) % 10));
		div = div / 10;
	}
}
