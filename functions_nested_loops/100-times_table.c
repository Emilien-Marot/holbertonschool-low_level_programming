#include "main.h"

/**
 * print_times_table - blabla
 *
 * @n: abc
 * Description: blabla
 * Return: blabla
 */
void print_times_table(int n)
{
	int n1;
	int n2;
	int p;

	if (n >= 0 && n <= 15)
	{
		for (n1 = 0; n1 <= n; n1++)
		{
			for (n2 = 0; n2 <= n; n2++)
			{
				p = n1 * n2;
				if (p < 1000 && n2 > 0)
					_putchar(' ');
				if (p < 100 && n2 > 0)
					_putchar(' ');
				else if (n2 > 0)
					_putchar('0' + p / 100);
				if (p < 10 && n2 > 0)
					_putchar(' ');
				else if (n2 > 0)
					_putchar('0' + (p % 100) / 10);
				_putchar('0' + (p % 10));
				if (n2 == n)
					_putchar('\n');
				else
					_putchar(',');
			}
		}
	}
}
