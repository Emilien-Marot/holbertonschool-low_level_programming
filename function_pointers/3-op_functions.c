#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - blabla
 *
 * @a: abc
 * @b: def
 *
 * Description: blabla
 * Return: blabla
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - blabla
 *
 * @a: abc
 * @b: def
 *
 * Description: blabla
 * Return: blabla
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - blabla
 *
 * @a: abc
 * @b: def
 *
 * Description: blabla
 * Return: blabla
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - blabla
 *
 * @a: abc
 * @b: def
 *
 * Description: blabla
 * Return: blabla
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - blabla
 *
 * @a: abc
 * @b: def
 *
 * Description: blabla
 * Return: blabla
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
