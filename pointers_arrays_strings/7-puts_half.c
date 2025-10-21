#include "main.h"
#include <stdio.h>

/**
 * puts_half - blabla
 *
 * @str: abcd
 *
 * Description: blabla
 * Return: blabla
 */
void puts_half(char *str)
{
	int len = 0;
	int l_max;
	int l;

	while (*(str + len) != '\0')
	{
		len++;
	}

	if (len % 2 == 0)
		l_max = len / 2;
	else
		l_max = (len - 1) / 2;
	for (l = len - l_max; l < len; l++)
	{
		_putchar(*(str + l));
	}
	_putchar('\n');
}
