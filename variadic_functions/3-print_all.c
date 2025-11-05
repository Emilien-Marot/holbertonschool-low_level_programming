#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_s - blabla
 *
 * @ap: abc
 *
 * Description: blabla
 * Return: blabla
 */
void print_s(va_list ap)
{
	char *str = va_arg(ap, char *);
	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}

/**
 * print_i - blabla
 *
 * @ap: abc
 *
 * Description: blabla
 * Return: blabla
 */
void print_i(va_list ap)
{
	printf("%d", va_arg(ap, int));
}

/**
 * print_f - blabla
 *
 * @ap: abc
 *
 * Description: blabla
 * Return: blabla
 */
void print_f(va_list ap)
{
        printf("%f", va_arg(ap, double));
}

/**
 * print_c - blabla
 *
 * @ap: abc
 *
 * Description: blabla
 * Return: blabla
 */
void print_c(va_list ap)
{
        printf("%c", va_arg(ap, int));
}

/**
 * print_0 - blabla
 *
 * @ap: abc
 *
 * Description: blabla
 * Return: blabla
 */
void print_0(va_list ap)
{
	ap = ap;
}

/**
 * print_strings - blabla
 *
 * @separator: abc
 * @n: def
 *
 * Description: blabla
 * Return: blabla
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	int i = 0, j;
	t_f list_type[] = {
		{'s', print_s},
		{'f', print_f},
		{'i', print_i},
		{'c', print_c},
		{'\0', print_0}
	};

	va_start(ap, 0);
	while(format[i] != '\0')
	{
		j = 0;
		while(list_type[j].t != '\0' && list_type[j].t != format[i])
		{
			j++;
		}
		list_type[j].f(ap);
		i++;
	}
	va_end(ap);
}
