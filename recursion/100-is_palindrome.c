#include "main.h"
#include <stdio.h>

/**
 * char_check - blabla
 *
 * @s: abc
 * @len: def
 * @i: ghi
 *
 * Description: blabla
 * Return: blabla
 */
int strlen_r(char *s, int i)
{

	if (s[i] == '\0')
		return (0);
	return (strlen_r(s, i + 1) + 1);
}

/**
 * char_check - blabla
 *
 * @s: abc
 * @len: def
 * @i: ghi
 *
 * Description: blabla
 * Return: blabla
 */
int char_check(char *s, int len, int i)
{
	if (i > len - i)
		return (1);
	if (s[i] != s[len - (i + 1)])
		return (0);
	return (char_check(s, len, i + 1));
}

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
	int len;

	len =  strlen_r(s, 0);
	return (char_check(s, len, 0));
}
