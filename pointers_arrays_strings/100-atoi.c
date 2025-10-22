#include "main.h"

/**
 * _atoi - blabla
 *
 * @s: abcd
 *
 * Description: blabla
 * Return: blabla
 */
int _atoi(char *s)
{
	int val = 0;
	int i = 0;
	int m = 1;

	while (*(s + i) != '\0')
	{
		if (*(s + i) >= '0' && *(s + i) <= '9')
			val = 10 * val + m * (*(s + i) - '0');
		else if (val != 0)
			break;
		else if (*(s + i) == '-')
			m = m * -1;
		i++;
	}
	return (val);
}
