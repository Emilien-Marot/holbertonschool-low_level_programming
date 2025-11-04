#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - blabla
 *
 * @separator: abc
 * @n: def
 *
 * Description: blabla
 * Return: blabla
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	char *str;
	unsigned int i;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char *);
		if (i != 0 && separator != NULL)
			printf("%s", separator);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
	}
	printf("\n");
	va_end(ap);
}
