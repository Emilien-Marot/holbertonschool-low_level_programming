#include "hash_tables.h"

/**
 * key_index - blabla
 *
 * @key: abc
 * @size: def
 *
 * Return: xyz
**/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int i;

	i = hash_djb2(key) % size;
	return (i);
}
