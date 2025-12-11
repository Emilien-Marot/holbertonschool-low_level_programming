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
	/*hash_node_t *node;*/
	char *key1 = "hetairas";
	char *key2 = "mentioner";
	char *val1 = "h";
	char *val2 = "m";

	ht = hash_table_create(1024);
	hash_table_set(ht, key1, val1);
	hash_table_set(ht, key2, val2);
	for (i = 0; i < ht->size; i++)
	{
		printf("[%lu]\n", i);
		/*node = (ht->array)[i];
		if (node == NULL)
			 printf("[%lu]\n", i);
		while(node != NULL)
		{
			printf("[%lu] %s:%s:%p\n", i, node->key, node->value, (void *)node->next);
			node = node->next;
		}*/
	}
	return (EXIT_SUCCESS);
}
