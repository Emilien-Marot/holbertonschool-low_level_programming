#include "dog.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * free_dog - blabla
 *
 * @d: abc
 *
 * Description: blabla
 * Return: blabla
 */
void free_dog(dog_t *d)
{
	free(d->owner);
	free(d->name);
	free(d);
}
