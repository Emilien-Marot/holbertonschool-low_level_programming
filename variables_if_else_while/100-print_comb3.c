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

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
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
				putchar('0' + i);
				putchar('0' + j);
			}
		}
	}
	putchar('\n');
	return (0);
}
