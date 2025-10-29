#include <stdlib.h>
#include "main.h"

/**
 * create_array - blabla
 *
 * @size: abc
 * @c: def
 *
 * Description: blabla
 * Return: blabla
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *table;

	if (size == 0)
		return (NULL);
	table = malloc(size * sizeof(char));
	if (table == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		table[i] = c;
	}
	return (table);
}
