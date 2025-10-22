#include "main.h"

/**
 * leet - blabla
 *
 * @ abcd
 *
 * leet: blabla
 * Return: blabla
 */
char *leet(char *c)
{
	char l1[] = "aAeEoOtTlL";
	char l2[] = "4433007711";
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		j = 0;
		while (c[j] != '\0')
		{
			if (c[j] == l1[i])
				c[j] = l2[i];
			j++;
		}
	}
	return (c);
}
