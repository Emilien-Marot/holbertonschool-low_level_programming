#include "function_pointers.h"

/**
 * print_name - blabla
 *
 * @name: abc
 * @f: def
 *
 * Description: blabla
 * Return: blabla
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
