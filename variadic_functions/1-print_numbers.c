#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - blabla
 *
 * @separator: abc
 * @n: def
 *
 * Description: blabla
 * Return: blabla
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		if (i != 0 && separator != NULL)
			printf("%s", separator);
		printf("%d", va_arg(ap, int));
	}
	printf("\n");
	va_end(ap);
}
