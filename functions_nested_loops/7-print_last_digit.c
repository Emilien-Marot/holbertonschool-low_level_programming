#include "main.h"

/**
 * print_last_digit - blabla
 *
 * @n: value
 *
 * Description: blabla
 * Return: blabla
 */
int print_last_digit(int n)
{
	int n2 = n % 10;

	if (n2 < 0)
		n2 = -1 * n2;

	_putchar ('0' + n2);
	return (n2);
}
