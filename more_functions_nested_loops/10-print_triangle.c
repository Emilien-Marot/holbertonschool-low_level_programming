#include "main.h"

/**
 * print_triangle - blabla
 *
 * @size: abc
 *
 * Description: blabla
 * Return: blabla
 */
void print_triangle(int size)
{
	int line;
	int c;

	if (size > 0)
	{
		for (line = 1; line <= size; line++)
		{
			for (c = 0; c < size; c++)
			{
				if (c >= size - line)
					_putchar('#');
				else
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
