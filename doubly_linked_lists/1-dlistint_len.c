#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - blabla
 *
 * @h: abd
 *
 * Return: xyz
**/
size_t print_dlistint(const dlistint_t *h)
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
