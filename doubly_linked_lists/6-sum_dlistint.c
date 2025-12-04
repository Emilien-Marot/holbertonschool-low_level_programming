#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_dlistint - blabla
 *
 * @head: abd
 *
 * Return: xyz
**/
int sum_dlistint(dlistint_t *head)
{
	int sum;
	dlistint_t *current;

	if (head == NULL)
		return (0);
	current = head->next;
	sum = head->n;
	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
