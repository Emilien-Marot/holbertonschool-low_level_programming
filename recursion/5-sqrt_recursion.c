#include "main.h"

/**
 * _sqrt_recursion - blabla
 *
 * @n: abc
 *
 * Description: blabla
 * Return: blabla
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_recursion_2(n, 0));
}

/**
 * _sqrt_recursion_2 - blabla
 *
 * @n: abc
 * @guess: def
 *
 * Description: blabla
 * Return: blabla
 */
int _sqrt_recursion_2(int n, int guess)
{
	if (n == guess * guess)
		return (guess);
	else if (n < guess * guess)
		return (-1);
	else
		return (_sqrt_recursion_2(n, guess + 1));
}
