#include "main.h"

/**
 * _memset - blabla
 *
 * @s: abc
 * @b: def
 * @n: ghi
 *
 * Description: blabla
 * Return: blabla
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
