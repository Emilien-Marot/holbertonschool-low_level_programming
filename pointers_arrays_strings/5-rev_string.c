#include "main.h"
#include <stdio.h>

/**
 * rev_string - blabla
 *
 * @s: abcd
 *
 * Description: blabla
 * Return: blabla
 */
void rev_string(char *s)
{
	int len = 0;
	int i;
	char temp;

	while (*(s + len) != '\0')
	{
		len++;
	}
	len--;

	for (i = 0; i < len - i; i++)
	{
		temp = *(s + i);
		*(s + i) = *(s + len - i);
		*(s + len - i) = temp;
	}
}
