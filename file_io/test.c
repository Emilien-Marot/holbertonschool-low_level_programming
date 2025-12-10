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
	int file;
	char c;
	ssize_t res = 0;
	long unsigned int i;

	if (filename == NULL || letters == 0)
		return (0);
	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
	for (i = 0; i <= letters; i++)
	{
		res = read(file, &c, sizeof(char));
		if (c == '\0')
			break;
		if (write(STDOUT_FILENO, &c, 1) == -1)
		{
			close(file);
			return (0);
		}
	}
	close(file);
	return (res);
}
