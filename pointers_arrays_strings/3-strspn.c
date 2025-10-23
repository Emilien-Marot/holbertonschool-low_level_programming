#include "main.h"

/**
 * _strspn - blabla
 *
 * @s: abc
 * @accept: def
 *
 * Description: blabla
 * Return: blabla
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	int ct = 0;
	int pf = 1;

	for (i = 0; s[i] != '\0' && pf; i++)
	{
		pf = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				pf = 1;
				ct++;
			}
		}
	}
	return (ct);
}
