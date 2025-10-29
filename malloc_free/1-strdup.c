#include <stdlib.h>
#include "main.h"

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
