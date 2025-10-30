#include "main.h"
#include <stdlib.h>

/**
 * _strlen - blabla
 *
 * @str: abd
 *
 * Description: blabla
 * Return: blabla
 */
unsigned int _strlen(char *str)
{
	unsigned int len = 0;

	while (*(str + len) != '\0')
	{
		len++;
	}
	return (len);
}

/**
 * string_nconcat - blabla
 *
 * @s1: abc
 * @s2: def
 * @n: ghi
 *
 * Description: blabla
 * Return: blabla
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, i;
	char *res;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = _strlen(s1);
	len2 = _strlen(s2);

	if (n > len2)
		n = len2;
	res = malloc(len1 + n + 1);
	if (res == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		res[i] = s1[i];
	for (i = 0; i < n; i++)
		res[len1 + i] = s2[i];
	return (res);
}
