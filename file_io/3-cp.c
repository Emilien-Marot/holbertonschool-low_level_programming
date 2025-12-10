#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "main.h"
#define MAXBUFLEN 1024

/**
 * err_read - blabla
 *
 * @name: abc
 *
 * Return: xyz
**/
void err_read(char *name)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", name);
	exit(98);
}

/**
 * err_close - blabla
 *
 * @fd: abc
 *
 * Return: xyz
**/
void err_close(int fd)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fd);
	exit(100);
}

/**
 * err_write - blabla
 *
 * @name: abc
 *
 * Return: xyz
**/
void err_write(char *name)
{
	dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", name);
	exit(99);
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
	char buf[MAXBUFLEN];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
		err_read(argv[1]);
	file_to = open(argv[2], O_RDWR | O_CREAT | O_TRUNC, 0664);
	if (file_to == -1)
	{
		close(file_from);
		err_write(argv[2]);
	}
	do {
		size = read(file_from, buf, sizeof(buf));
		if (size == -1)
			err_read(argv[1]);
		if (dprintf(file_to, "%s", buf) == -1)
		{
			close(file_from);
			close(file_to);
			err_write(argv[2]);
		}
	} while (size == MAXBUFLEN);
	if (close(file_to) == -1)
		err_close(file_to);
	if (close(file_from) == -1)
		err_close(file_from);
	return (1);
}
