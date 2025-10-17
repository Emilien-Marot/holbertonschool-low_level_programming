#include "main.h"
#include <stdio.h>
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
	unsigned int n2;
	unsigned int n_test;
	int div = 1;

	if (n < 0)
	{
		_putchar('-');
		n2 = -1 * n;
	}
	else
	{
		n2 = n;
	}
	n_test = n2;
	while (n_test >= 10)
	{
		div = div * 10;
		n_test = n_test / 10;
	}
	while (div >= 1)
	{
		_putchar('0' + ((n2 / div) % 10));
		div = div / 10;
	}
}
