#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint - blabla
 *
 * @head: abc
 * @n: def
 *
 * Return: xyz
**/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);
	new->prev = NULL;
	new->n = n;
	new->next = *head;
	if (*head != NULL)
		(*head)->prev = new;
	*head = new;
	return (new);
}
