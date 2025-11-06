#include "main.h"
#include <stdio.h>

/**
 * is_palindrome - blabla
 *
 * @s: abc
 *
 * Description: blabla
 * Return: blabla
 */
int is_palindrome(char *s)
{
	int len, i;

	for (i = 0; s[i] != '\0'; i++)
		len = i;
	for (i = 0; i < len - i; i++)
	{
		if (s[i] != s[len - i])
			return (0);
	}
	return (1);
}
