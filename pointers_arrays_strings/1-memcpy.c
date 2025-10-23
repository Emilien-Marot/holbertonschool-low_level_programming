#include "main.h"

/**
 * _memcpy - blabla
 *
 * @dest: abc
 * @src: def
 * @n: ghi
 *
 * Description: blabla
 * Return: blabla
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) = *(src + i);
	return (dest);
}
