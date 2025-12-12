#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include "hash_tables.h"

/**
 * hash_table_delete - blabla
 *
 * @ht: abc
 *
 * Return: xyz
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;
	hash_node_t *next;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		node = (ht->array)[i];
		while (node != NULL)
		{
			next = node->next;
			free(node->key);
			free(node->value);
			free(node);
			node = next;
		}
	}
	free(ht->array);
	free(ht);
}
