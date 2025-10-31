#include "dog.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * new_dog - blabla
 *
 * @name: abc
 * @age: def
 * @owner: ghi
 *
 * Description: blabla
 * Return: blabla
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr = malloc(sizeof(dog_t));
	ptr->name = name;
	ptr->age = age;
	ptr->owner = owner;
	return ptr;
}
