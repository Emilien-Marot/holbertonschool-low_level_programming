#include "dog.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * _strdup - blabla
 *
 * @str: abc
 *
 * Description: blabla
 * Return: blabla
 */
char *_strdup(char *str)
{
	unsigned int i;
	unsigned int count = 0;
	char *str2;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		count++;
	str2 = malloc((count + 1) * sizeof(char));
	if (str2 == NULL)
		return (NULL);
	for (i = 0; i <= count; i++)
	{
		str2[i] = str[i];
	}
	return (str2);
}

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

	if (ptr == NULL)
		return (NULL);
	ptr->name = _strdup(name);
	if (ptr->name == NULL)
		free(ptr);
	ptr->owner = _strdup(owner);
	if (ptr->owner == NULL)
	{
		free(ptr->name);
		free(ptr);
	}
	ptr->age = age;
	return (ptr);
}
