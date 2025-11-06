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
	int div = 1;
	unsigned int abs_n;

	if (n < 0)
	{
		abs_n = -1 * n;
		_putchar('-');
	}
	else
		abs_n = n;
	while (abs_n / div >= 10)
		div = div * 10;
	for (; div >= 1; div = div / 10)
	{
		_putchar('0' + ((abs_n / div) % 10));
	}
}
