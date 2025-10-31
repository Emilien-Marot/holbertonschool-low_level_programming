#include "dog.h"
#include <stdio.h>
#include <stddef.h>

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
	dog_t res;
	dog_t *ptr;

	ptr = &res;
	ptr->name = name;
	ptr->age = age;
	ptr->owner = owner;
	return (ptr);
}
