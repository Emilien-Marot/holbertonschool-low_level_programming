#include "main.h"

/**
 * _strspn - blabla
 *
 * @c: abc
 *
 * Description: blabla
 * Return: blabla
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	int ct = 0;
	char ch;

	for (i = 0; accept[i] != '\0'; i++)
	{
		ch = accept[i];
		for (j = 0; s[j] != '\0'; j++)
		{
			if (s[j] == ch)
				ct++;
		}
	}
}
