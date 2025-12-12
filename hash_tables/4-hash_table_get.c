#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include "hash_tables.h"

/**
 * hash_table_get - blabla
 *
 * @ht: abc
 * @key: def
 *
 * Return: xyz
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node;

	if (key == NULL || key[0] == '\0' || ht == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	node = (ht->array)[index];
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}
	return (NULL);
}
