#include "function_pointers.h"

/**
 * array_iterator - blabla
 *
 * @array: abc
 * @size: def
 * @action: ghi
 *
 * Description: blabla
 * Return: blabla
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
