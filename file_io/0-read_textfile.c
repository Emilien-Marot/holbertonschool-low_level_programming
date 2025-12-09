#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * read_textfile - blabla
 *
 * @filename: abc
 * @letters: def
 *
 * Return: xyz
**/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file, i;
	char *str;
	ssize_t res = 0;

	if (filename == NULL || letters == 0)
		return (0);
	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
	str = (char *)malloc((letters + 1) * sizeof(char));
	if (str == NULL)
	{
		close(file);
		return (0);
	}
	res = read(file, str, letters * sizeof(char));
	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	close(file);
	free(str);
	return (res);
}
