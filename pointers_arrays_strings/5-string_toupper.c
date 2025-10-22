#include "main.h"

/**
 * string_toupper - blabla
 *
 * @c: abcd
 *
 * leet: blabla
 * Return: blabla
 */
char *string_toupper(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		if (c[i] >= 'a' && c[i] <= 'z')
		{
			c[i] = c[i] + 'A' - 'a';
		}
	}
	return (c);
}
