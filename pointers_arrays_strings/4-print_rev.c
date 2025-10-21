#include "main.h"

/**
 * print_rev- blabla
 *
 * @s: abcd
 *
 * Description: blabla
 * Return: blabla
 */
void print_rev(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
	{
		len++;
	}

	for (; len >= 0; len--)
	{
		_putchar(*(s + len));
	}
	_putchar('\n');
}
