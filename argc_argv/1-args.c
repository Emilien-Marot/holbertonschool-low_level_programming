#include <stdio.h>
#include <stdlib.h>

/**
 * main - blabla
 *
 * @argc: abc
 * @argv: def
 *
 * Description: blabla
 * Return: blabla
 */
int main(int argc, char *argv[])
{
	argv[argc] = NULL;
	printf("%d\n", argc - 1);
	return (0);
}
