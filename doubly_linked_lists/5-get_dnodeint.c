#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - blabla
 *
 * @head: abc
 * @index: def
 *
 * Return: xyz
**/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int i;

	if (current == NULL)
		return (NULL);
	for (i = 0; i < index; i++)
	{
		if (current->next == NULL)
			return (NULL);
		current = current->next;
	}
	return (current);
}
