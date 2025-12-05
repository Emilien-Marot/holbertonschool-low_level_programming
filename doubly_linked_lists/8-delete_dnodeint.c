#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - blabla
 *
 * @head: abc
 * @index: def
 *
 * Return: xyz
**/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *current = *head;
	dlistint_t *prev = NULL;
	dlistint_t *next = NULL;

	if (current == NULL)
		return (-1);
	for (i = 0; i < index; i++)
	{
		if (current == NULL)
			return (-1);
		current = current->next;
	}
	prev = current->prev;
	next = current->next;
	free(current);
	if (index == 0)
		*head = next;
	if (next != NULL)
		next->prev = prev;
	if (prev != NULL)
		prev->next = next;
	return (1);
}
