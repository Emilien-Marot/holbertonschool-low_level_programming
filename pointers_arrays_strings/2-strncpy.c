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

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
