#include "main.h"

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
