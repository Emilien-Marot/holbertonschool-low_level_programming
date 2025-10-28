#include <stdio.h>
#include <stdlib.h>

/**
 * check_num - blabla
 *
 * @num_s: abc
 *
 * Description: blabla
 * Return: blabla
 */
int check_num(char *num_s)
{
	int i;

	for (i = 0; num_s[i] != '\0'; i++)
	{
		if (num_s[i] < '0' || num_s[i] > '9')
			return (1);
	}
	return (0);
}

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
	int i, sum;

	sum = 0;
	for (i = 1; i < argc; i++)
	{
		if (check_num(argv[i]) == 1)
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
