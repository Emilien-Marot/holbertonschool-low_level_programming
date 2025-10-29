#include <stdlib.h>
#include "main.h"

/**
 * _strlen - blabla
 *
 * @str: abc
 *
 * Description: blabla
 * Return: blabla
 */
int _strlen(char *str)
{
	int i, count = 0;

	for (i = 0; str[i] != '\0'; i++)
		count++;
	return (count);
}

/**
 * str_concat - blabla
 *
 * @s1: abc
 * @s2: def
 *
 * Description: blabla
 * Return: blabla
 */
char *str_concat(char *s1, char *s2)
{
	int i;
	char *res_str;
	int len1, len2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	res_str = malloc((len1 + len2 + 1) * sizeof(char));
	if (res_str == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
	{
		res_str[i] = s1[i];
	}
	for (i = 0; i <= len2; i++)
		res_str[len1 + i] = s2[i];
	return (res_str);
}
