#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include "hash_tables.h"

/**
 * free_return - blabla
 *
 * @ret: abc
 * @count: def
 * @...: ghi
 *
 * Return: xyz
 */
int free_return(int ret, int count, ...)
{
	va_list ap;
	int i;

	va_start(ap, count);
	for (i = 0; i < count; i++)
		free(va_arg(ap, void *));
	va_end(ap);
	return (ret);
}

/**
 * hash_table_set - blabla
 *
 * @ht: abc
 * @key: def
 * @value: ghi
 *
 * Return: xyz
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node;
	hash_node_t *node;
	char *ptr_value;
	char *ptr_key;

	if (key == NULL || key[0] == '\0' || ht == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	ptr_value = strdup(value);
	if (ptr_value == NULL)
		return (0);
	node = (ht->array)[index];
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
		{
			free(node->value);
			node->value = ptr_value;
			return (1);
		}
		node = node->next;
	}
	ptr_key = strdup(key);
	if (ptr_key == NULL)
		return (free_return(0, 1, ptr_value));
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (free_return(0, 2, ptr_value, ptr_key));
	new_node->value = ptr_value;
	new_node->key = ptr_key;
	new_node->next = (ht->array)[index];
	(ht->array)[index] = new_node;
	return (1);
}
