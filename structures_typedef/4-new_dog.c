#include "dog.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * _strlen - blabla
 *
 * @s: abcd
 *
 * Description: blabla
 * Return: blabla
 */
int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
	{
		len++;
	}
return (len);
}

/**
 * _strncpy - blabla
 *
 * @dest: abc
 * @src: def
 * @n: ghi
 *
 * Description: blabla
 * Return: blabla
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	char s = 1;

	for (i = 0; i < n; i++)
	{
		if (s && src[i] != '\0')
		{
			dest[i] = src[i];
		}
		else
		{
			s = 0;
			dest[i] = '\0';
		}
	}
	return (dest);
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
	ptr->name = malloc(_strlen(name) + 1);
	if (ptr->name == NULL)
	{
		free(ptr);
		return (NULL);
	}
	ptr->owner = malloc(_strlen(name) + 1);
	if (ptr->owner == NULL)
	{
		free(ptr->name);
		free(ptr);
		return (NULL);
	}
	_strncpy(ptr->name, name, _strlen(name)+1);
	_strncpy(ptr->owner, owner, _strlen(owner)+1);
	ptr->age = age;
	return ptr;
}
