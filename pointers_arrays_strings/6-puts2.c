#include "main.h"

/**
 * puts2 - blabla
 *
 * @str: abcd
 *
 * Description: blabla
 * Return: blabla
 */
void puts2(char *str)
{
	int ch = 0;

	while (*(str + ch) != '\0')
	{
		if (ch % 2 == 0)
			_putchar(*(str + ch));
		ch++;
	}
	_putchar('\n');
}
