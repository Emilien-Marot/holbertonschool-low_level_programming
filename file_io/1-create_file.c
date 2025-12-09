#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * create_file - blabla
 *
 * @filename: abc
 * @text_content: def
 *
 * Return: xyz
**/
int create_file(const char *filename, char *text_content)
{
	int file, i = 0;
	ssize_t res = 0;

	if (filename == NULL)
		return (-1);
	file = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
	if (file == -1)
		return (-1);
	res = 1;
	for(; text_content[i] != '\0';)
		i++;
	if (text_content != NULL)
		res = write(file, text_content, i);
	close(file);
	if (res == -1)
		return(-1);
	return (1);
}
