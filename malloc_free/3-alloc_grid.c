#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - blabla
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
	int *temp;
	int i;
	int j;

	if (width <= 0 || height <= 0)
		return (NULL);
	array = malloc(height * sizeof(int *));
	if (array == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		temp = malloc(width * sizeof(int));
		if (temp == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(array[j]);
			}
			free(array);
			return (NULL);
		}
		array[i] = temp;
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			array[i][j] = 0;
		}
	}
	return (array);
}
