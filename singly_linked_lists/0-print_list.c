#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - blabla
 *
 * @h: abd
 *
 * Return: xyz
**/
size_t print_list(const list_t *h)
{
	int size = 1;
	list_t *current = h->next;

	if (h->str == NULL)
		printf("[0] (nil)\n");
	else
		printf("[%d] %s\n", h->len, h->str);
	while (current != NULL)
	{
		size++;
		if (current->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", current->len, current->str);
		current = current->next;
	}
	return (size);
}
