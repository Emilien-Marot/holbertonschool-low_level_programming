#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - blabla
 *
 * @h: abd
 *
 * Return: xyz
**/
size_t list_len(const list_t *h)
{
	int size;
	list_t *current;

	if (h == NULL)
		return (0);
	current = h->next;
	size = 1;
	while (current != NULL)
	{
		size++;
		current = current->next;
	}
	return (size);
}
