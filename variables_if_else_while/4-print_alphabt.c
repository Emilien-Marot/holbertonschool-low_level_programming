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

	for (n = 'a'; n <= 'z'; n++)
	{
		if (n != 'q' && n != 'e')
		{
			putchar(n);
		}
	}
	putchar('\n');
	return (0);
}
