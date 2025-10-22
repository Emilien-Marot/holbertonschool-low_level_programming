#include "main.h"

/**
 * cap_string - blabla
 *
 * @c: abcd
 *
 * leet: blabla
 * Return: blabla
 */
char *cap_string(char *c)
{
	int i;
	char nw = 1;

	for (i = 0; c[i] != '\0'; i++)
	{
		if (c[i] >= 'a' && c[i] <= 'z' && nw)
		{
			c[i] = c[i] + 'A' - 'a';
		}
		nw = c[i] == ' ' || c[i] == '.' || c[i] == '!' || c[i] == ',' || c[i] == ';';
		nw = nw || c[i] == '\t' || c[i] == '\n' || c[i] == '?' || c[i] == '"';
		nw = nw || c[i] == '(' || c[i] == ')' || c[i] == '{' || c[i] == '}';
	}
	return (c);
}
