#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include "hash_tables.h"

/**
 * hash_table_print - blabla
 *
 * @ht: abc
 *
 * Return: xyz
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;
	char *separator = "";

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		node = (ht->array)[i];
		while (node != NULL)
		{
			printf("%s'%s': '%s'", separator, node->key, node->value);
			separator = ", ";
			node = node->next;
		}
	}
	printf("}\n");
}
