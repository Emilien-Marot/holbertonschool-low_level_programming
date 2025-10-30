#include "main.h"
#include <stdlib.h>

/**
 * array_range - blabla
 *
 * @min: abc
 * @max: def
 *
 * Description: blabla
 * Return: blabla
 */
int *array_range(int min, int max)
{
	int *res;
	int i;

	if (min > max)
		return (NULL);
	res = malloc((max + 1 - min) * sizeof(int));
	if (res == NULL)
		return (NULL);
	for (i = 0; i <= max - min; i++)
	{
		res[i] = min + i;
	}
	return (res);
}
