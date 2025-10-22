#include "main.h"

/**
 * _strncat - blabla
 *
 * @dest: abc
 * @src: def
 * @n: ghi
 *
 * Description: blabla
 * Return: blabla
 */
char *_strncat(char *dest, char *src, int n)
{
	int len_d = 0;
	int len_s = 0;
	int i;

	while (*(dest + len_d) != '\0' || *(src + len_s) != '\0')
	{
		if (*(dest + len_d) != '\0')
			len_d++;
		if (*(src + len_s) != '\0')
			len_s++;
	}
	for (i = 0; i <= len_s && i < n ; i++)
	{
		*(dest + len_d + i) = *(src + i);
	}
	if (len_s > n)
		*(dest + len_d + n + 1) = '\0';

	return (dest);
}
