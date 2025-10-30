#include "main.h"
#include <stdlib.h>

/**
 * _calloc - blabla
 *
 * @nmemb: abc
 * @size: def
 *
 * Description: blabla
 * Return: blabla
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *res;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	res = malloc(nmemb * size);
	if (res == NULL)
		return (NULL);
	for (i = 0; i < nmemb; i++)
	{
		res[i] = '\0';
	}
	return (res);
}
