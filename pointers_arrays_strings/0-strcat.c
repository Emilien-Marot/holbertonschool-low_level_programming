#include "main.h"

/**
 * _strcat - blabla
 *
 * @dest: abc
 * @src: def
 *
 * Description: blabla
 * Return: blabla
 */
char *_strcat(char *dest, char *src)
{
	int len_d = 0;
	int len_s = 0;
	int i;

	while (*(dest + len_d) != '\0' && *(src + len_s) != '\0')
	{
		if (*(dest + len_d) != '\0')
			len_d++;
		if (*(src + len_s) != '\0')
			len_s++;
	}
	for (i = 0; i <= len_s; i++)
	{
		*(dest + len_d + i) = *(src + i);
	}
	return (dest);
}
