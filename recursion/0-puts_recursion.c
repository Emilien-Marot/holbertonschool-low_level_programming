#include "main.h"

/**
 * _puts_recursion - blabla
 *
 * @s: abc
 *
 * Description: blabla
 * Return: blabla
 */
void _puts_recursion(char *s)
{
	if (s[0] == '\0')
		_putchar('\n');
	else
	{
		_putchar(s[0]);
		_puts_recursion(s + 1);
	}
}
