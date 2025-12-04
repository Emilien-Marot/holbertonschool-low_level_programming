#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint_end - blabla
 *
 * @head: abc
 * @n: def
 *
 * Return: xyz
**/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *current = *head;
	dlistint_t *new = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (current == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}
	while (current->next != NULL)
		current = current->next;
	current->next = new;
	new->prev = current;
	return (new);
}
