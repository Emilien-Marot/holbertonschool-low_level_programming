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

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (j > i)
			{
				putchar('0' + i);
				putchar('0' + j);
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
