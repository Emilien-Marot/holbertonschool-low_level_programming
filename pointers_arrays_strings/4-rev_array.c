#include "main.h"

/**
 * reverse_array - blabla
 *
 * @a: abc
 * @n: def
 *
 * leet: blabla
 * Return: blabla
 */
void reverse_array(int *a, int n)
{
	int tmp;
	int i;
	int sz = n - 1;

	for (i = 0; i < sz - i; i++)
	{
		tmp = a[i];
		a[i] = a[sz - i];
		a[sz - i] = tmp;
	}
}
