#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * append_text_to_file - blabla
 *
 * @filename: abc
 * @text_content: def
 *
 * Return: xyz
**/
int append_text_to_file(const char *filename, char *text_content)
{
	int file, i = 0;
	ssize_t res = 0;

	if (filename == NULL)
		return (-1);
	file = open(filename, O_APPEND | O_WRONLY, 0666);
	if (file == -1)
		return (-1);
	res = 1;
	if (text_content != NULL)
	{
		for (; text_content[i] != '\0';)
			i++;
		res = write(file, text_content, i);
	}
	close(file);
	if (res == -1)
		return (-1);
	return (1);
}
