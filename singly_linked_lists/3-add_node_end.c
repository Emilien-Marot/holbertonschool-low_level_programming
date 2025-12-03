#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - blabla
 *
 * @head: abc
 * @str: def
 *
 * Return: xyz
**/
list_t *add_node_end(list_t **head, const char *str)
{
	char *new_str;
	list_t *current = *head;
	int len = 0, size = 0;
	list_t *new = (list_t *)malloc(sizeof(list_t));

	if (new == NULL)
	{
		printf("a\n");
		return (NULL);
	}
	new_str = strdup(str);
	if (new_str == NULL)
	{
		printf("b\n");
		free(new);
		return (NULL);
	}
	while (new_str[len] != '\0')
		len++;
	new->str = new_str;
	new->len = len;
	new->next = NULL;
	if (current == NULL)
	{
		*head = new;
		return (new);
	}
	while (current->next != NULL)
	{
		current = current->next;
		size++;
	}
	current->next = new;
	return (new);
}
