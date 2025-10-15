#include "main.h"

/**
 * times_table - blabla
 *
 * Description: blabla
 * Return: blabla
 */
void times_table(void)
{
	int n1;
	int n2;
	int p;

	for (n1 = 0; n1 < 10; n1++)
	{
		for (n2 = 0; n2 < 10; n2++)
		{
			p = n1 * n2;
			if (p < 100 && n2 > 0)
				_putchar(' ');
			else if (n2 > 0)
				_putchar('0' + p / 100);
			if (p < 10 && n2 > 0)
				_putchar(' ');
			else if (n2 > 0)
				_putchar('0' + (p % 100) / 10);
			_putchar('0' + (p % 10));
			if (n2 == 9)
				_putchar('\n');
			else
				_putchar(',');
		}
	}
}
