#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	unsigned long int i;
	hash_table_t *ht;
	hash_node_t *node;
	char *key1 = "hetairas";
	char *key2 = "mentioner";
	char *val1 = "h";
	char *val2 = "m";

	ht = hash_table_create(1024);
	hash_table_set(ht, key1, val1);
	hash_table_set(ht, key2, val2);

	i = key_index((unsigned char *)key1, 1024);
	node = (ht->array)[i];
	while(node != NULL)
	{
		printf("%s:%s:%p\n", node->key, node->value, (void *)node->next);
		node = node->next;
	}
	return (EXIT_SUCCESS);
}
