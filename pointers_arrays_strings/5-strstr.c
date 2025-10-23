#include "main.h"
#include <stdio.h>
#include <stddef.h>

/**
 * _strstr - blabla
 *
 * @haystack: abc
 * @needle: def
 *
 * Description: blabla
 * Return: blabla
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;
	int ct = 1;


	for (i = 0; haystack[i] != '\0' && ct; i++)
	{
		if (haystack[i] == needle[0] || needle[0] == '\0')
		{
			ct = 0;
			for (j = 0; needle[j] != '\0'; j++)
			{
				if (needle[j] != haystack[i + j])
					ct = 1;
			}
		}
	}
	if (ct == 1)
		return (NULL);
	else
		return (haystack + i - 1);
}
