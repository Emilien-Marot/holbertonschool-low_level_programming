#ifndef MYHEADER_H
#define MYHEADER_H
#include <stddef.h>
#include <stdarg.h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct type_f
{
	char t;
	void (*f)(va_list a);
} t_f;

#endif
