#include "hash_tables.h"

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *res;

	res = (hash_table_t *)malloc(size * sizeof(hash_table_t));
	return (res);
}
