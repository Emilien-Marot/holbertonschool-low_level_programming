#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * malloc_checked - blabla
 *
 * @b: abc
 *
 * Description: blabla
 * Return: blabla
 */
void *malloc_checked(unsigned int b)
{
	void *pnt = malloc(b);
	if (pnt == NULL)
		exit(98);
	return (pnt);
}
