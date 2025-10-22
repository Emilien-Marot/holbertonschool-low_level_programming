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
	int i = 0;

	while (*(src + i) != '\0' && i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	if (i == n && *(src + i - 1) != '\0')
		*(src + i) = '\0';
	return (dest);
}
