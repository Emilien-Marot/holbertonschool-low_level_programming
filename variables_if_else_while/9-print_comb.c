#include <stdio.h>

/**
 * main - blabla
 *
 * Description: blabla
 * Return: blabla
 */
int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		if (n > '0')
		{
			putchar(',');
			putchar(' ');
		}
		putchar(n);
	}
	putchar('\n');
	return (0);
}
