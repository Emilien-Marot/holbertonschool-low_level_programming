#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list - blabla
 *
 * @head: abd
 *
 * Return: xyz
**/
void free_list(list_t *head)
{
	if (head->next != NULL)
		free_list(head->next);
	if (head->str != NULL)
		free(head->str);
	free(head);
}
