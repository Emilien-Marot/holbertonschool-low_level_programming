#include <stdio.h>

/**
 * main - main function
 *
 * Description : blabla
 * Return: always 0
 */
int main(void)
{
	char a[] = "Size of a char: %d byte(s)\nSize of an int: %d byte(s)\nSize of a long int: %d byte(s)\nSize of a long long int: %d byte(s)\nSize of a float: %d byte(s)\n";

	printf(a, sizeof(char), sizeof(int), sizeof(long int), sizeof(long long int), sizeof(float));
	return (0);
}
