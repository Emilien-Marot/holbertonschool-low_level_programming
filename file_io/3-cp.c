#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "main.h"
#define MAXBUFLEN 10

/**
 * err_display - blabla
 *
 * @error: abc
 * @...: def
 *
 * Return: xyz
**/
void err_display(int error, ...)
{
	va_list args;
	char *str;

	va_start(args, error);
	switch (error)
	{
		case 97:
			dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
			break;
		case 98:
			str = "Error: Can't read from file";
			dprintf(STDERR_FILENO, "%s %s\n", str, va_arg(args, char *));
			break;
		case 99:
			str = "Error: Can't write to file";
			dprintf(STDERR_FILENO, "%s %s\n", str, va_arg(args, char *));
			break;
		case 100:
			dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", va_arg(args, int));
			break;
	}
	va_end(args);
	exit(error);
}

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
	char buf[MAXBUFLEN + 1];

	if (argc != 3)
		err_display(97);
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
		err_display(98, argv[1]);
	file_to = open(argv[2], O_RDWR | O_CREAT | O_TRUNC, 0664);
	if (file_to == -1)
	{
		close(file_from);
		err_display(99, argv[2]);
	}
	do {
		size = read(file_from, buf, sizeof(buf));
		if (size == -1)
			err_display(98, argv[1]);
		if (size == 0)
			buf[0] = '\0';
		printf("%ld", size);
		if (write(file_to, buf, size) == -1)
		{
			close(file_from);
			close(file_to);
			err_display(99, argv[2]);
		}
	} while (size == MAXBUFLEN + 1);
	if (close(file_to) == -1)
		err_display(100, file_to);
	if (close(file_from) == -1)
		err_display(100, file_from);
	return (1);
}
