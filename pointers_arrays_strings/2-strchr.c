#include "main.h"
#include <stddef.h>

/**
 * _strchr - blabla
 *
 * @s: abc
 * @c: def
 *
 * Description: blabla
 * Return: blabla
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return (NULL);
}
