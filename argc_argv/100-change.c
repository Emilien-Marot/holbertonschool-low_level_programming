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
	int cash, i = 0, coin = 0;
	int l_coin[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cash = atoi(argv[1]);
	while (cash > 0)
	{
		while (cash < l_coin[i])
			i++;
		cash -= l_coin[i];
		coin++;
	}
	printf("%d\n", coin);
	return (0);
}
