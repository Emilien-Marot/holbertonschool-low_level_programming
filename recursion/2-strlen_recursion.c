#include "main.h"

/**
 * _strlen_recursion - blabla
 *
 * @s: abc
 *
 * Description: blabla
 * Return: blabla
 */
int _strlen_recursion(char *s)
{
	if (s[0] == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
