#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - blabla
 *
 * Description: blabla
 * Return: blabla
 */
int main(void)
{
	int i;
	int j;
	int f = 1;

	for (i = 0; i < 100; i++)
	{
		for (j = i + 1; j < 100; j++)
		{
			if (j > i)
			{
				if (f != 1)
				{
					putchar(',');
					putchar(' ');
				}
				else
					f = 0;
				putchar('0' + i / 10);
				putchar('0' + (i % 10));
				putchar(' ');
				putchar('0' + j / 10);
				putchar('0' + (j % 10));
			}
		}
	}
	putchar('\n');
	return (0);
}
