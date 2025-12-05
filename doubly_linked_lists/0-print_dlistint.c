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
	printf("%p->%p->%p :%d\n", (void *)h->prev, (void *)h, (void *)h->next, h->n);
	while (current != NULL)
	{
		size++;
		printf("%p->%p->%p : %d\n", (void *)current->prev, (void *)current, (void *)current->next, current->n);
		current = current->next;
	}
	return (size);
}
