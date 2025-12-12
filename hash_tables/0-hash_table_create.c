#include "hash_tables.h"

/**
 * hash_table_create - blabla
 *
 * @size: abd
 *
 * Return: xyz
**/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_node_t **node;
	hash_table_t *table;

	node = malloc(size * sizeof(hash_node_t *));
	if (node == NULL)
		return (NULL);
	table = (hash_table_t *)malloc(sizeof(hash_table_t));
	if (table == NULL)
	{
		free(node);
		return (NULL);
	}
	table->size = size;
	table->array = node;
	return (table);
}
