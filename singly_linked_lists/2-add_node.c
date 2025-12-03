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
	int len = strlen(str);
	list_t *new = (list_t *)malloc(sizeof(list_t));

	new->str = new_str;
	new->len = len;
	new->next = *head;
	*head = new;
	return (new);
}
