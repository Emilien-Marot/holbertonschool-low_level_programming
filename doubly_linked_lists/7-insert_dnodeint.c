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
	dlistint_t *prev = current->prev;
	dlistint_t *new = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	if (current == NULL)
	{
		free(new);
		return (NULL);
	}
	for (i = 0; i < idx; i++)
	{
		if (current->next == NULL)
		{
			free(new);
			return (NULL);
		}
		prev = current;
		current = current->next;
	}
	new->next = current;
	new->prev = prev;
	prev->next = new;
	current->prev = new;
	return (new);
}
