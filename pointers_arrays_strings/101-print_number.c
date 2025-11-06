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

	if (n < 0)
	{
		n = n * -1;
		_putchar('-');
	}
	while (n / div >= 10)
		div = div * 10;
	for (; div >= 1; div = div / 10)
	{
		_putchar('0' + ((n / div) % 10));
	}
}
