#include "main.h"
#include <stdlib.h>

/**
 * str_concat - blabla
 *
 * @width: abc
 * @height: def
 *
 * Description: blabla
 * Return: blabla
 */
int **alloc_grid(int width, int height)
{
	int **array;
	int i;

	if (width <= 0 || height <= 0)
		return (NULL);
	array = calloc(height, sizeof(int *));
	if (array == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
		array[i] = calloc(width, sizeof(int));
		if (array[i] == NULL)
			return (NULL);
	return array;
}
