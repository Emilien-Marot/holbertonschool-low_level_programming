#include "main.h"
#include <stdio.h>
/**
 * _strncpy - blabla
 *
 * @dest: abc
 * @src: def
 * @n: ghi
 *
 * Description: blabla
 * Return: blabla
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	char s = 1;

	for (i = 0; i < n; i++)
	{
		if (s && src[i] != '\0')
		{
			dest[i] = src[i];
		}
		else
		{
			s = 0;
			dest[i] = '\0';
		}
	}
	return (dest);
}
