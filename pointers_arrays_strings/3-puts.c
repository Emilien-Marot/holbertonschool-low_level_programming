#include "main.h"

/**
 * _puts - blabla
 *
 * @str: abcd
 *
 * Description: blabla
 * Return: blabla
 */
void _puts(char *str)
{
	int ch = 0;

	while (*(str + ch) != '\0')
	{
		_putchar(*(str + ch));
		ch++;
	}
	_putchar('\n');
}
