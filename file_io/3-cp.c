#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "main.h"
#define MAXBUFLEN 1024

/**
 * main - blabla
 *
 * @argc: abc
 * @argv: def
 *
 * Return: xyz
**/
int main(int argc, char *argv[])
{
	int file_from, file_to;
	ssize_t size;
	char buf[MAXBUFLEN];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit (97);
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit (98);
	}
	file_to = open(argv[2], O_RDWR | O_CREAT | O_TRUNC, 0664);
	if (file_to == -1)
	{
		close(file_from);
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
		exit (99);
	}
	do
	{
		size = read(file_from, buf, sizeof(buf));
		if (size == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit (98);
		}
		if (dprintf(file_to, "%s", buf) == -1)
		{
			close(file_from);
			close(file_to);
			dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
			exit (99);
		}
	}
	while (size == MAXBUFLEN);
	if (close(file_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", file_to);
		exit (100);
	}
	if (close(file_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", file_from);
		exit (100);
	}
	return (1);
}
