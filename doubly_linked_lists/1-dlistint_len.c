#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - blabla
 *
 * @h: abd
 *
 * Return: xyz
**/
size_t dlistint_len(const dlistint_t *h)
{
	int size;
	dlistint_t *current;

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
