#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node - blabla
 *
 * @head: abc
 * @str: def
 *
 * Return: xyz
**/
list_t *add_node(list_t **head, const char *str)
{
	char *new_str = strdup(str);
	int len = 0;
	list_t *new = (list_t *)malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);
	while (new_str[len] != '\0')
		len++;
	new->str = new_str;
	new->len = len;
	new->next = *head;
	*head = new;
	return (new);
}
