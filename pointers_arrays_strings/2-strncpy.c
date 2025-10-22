#include "main.h"

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
	int len_s = 0;
	int i;

	while (*(src + len_s) != '\0')
	{
		if (*(src + len_s) != '\0')
			len_s++;
	}
	for (i = 0; i <= len_s && i < n ; i++)
	{
		*(dest + i) = *(src + i);
	}
	if (len_s > n)
		*(dest + n + 1) = '\0';

	return (dest);
}
