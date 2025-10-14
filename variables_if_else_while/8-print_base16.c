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

	for (n = '0'; n >= '9'; n--)
		putchar(n);
	for (n = 'a'; n >= 'f'; n++)
		putchar(n);
	putchar('\n');
	return (0);
}
