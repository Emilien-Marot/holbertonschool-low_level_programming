#include "main.h"

/**
 * print_sign - blabla
 *
 * @n: value
 *
 * Description: blabla
 * Return: blabla
 */
int print_sign(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
