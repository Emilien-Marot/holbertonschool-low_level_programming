#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - blabla
 *
 * @h: abc
 * @idx: def
 * @n: ghi
 *
 * Return: xyz
**/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *current = *h;
	dlistint_t *prev;
	dlistint_t *new = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	if (current == NULL && idx != 0)
	{
		free(new);
		return (NULL);
	}
	if (current == NULL)
	{
		new->prev = NULL;
		new->next = NULL;
		*h = new;
		return (new);
	}
	for (i = 0; i < idx; i++)
	{
		if (current == NULL)
		{
			free(new);
			return (NULL);
		}
		prev = current;
		current = current->next;
	}
	if (idx == 0)
		*h = new;
	new->next = current;
	new->prev = prev;
	if (prev != NULL)
		prev->next = new;
	if (current != NULL)
		current->prev = new;
	return (new);
}
