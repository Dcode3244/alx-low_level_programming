#include "hash_tables.h"


/***
 * hash_table_create - creates a hash table
 * @size: size of the hash table array
 * Return: pointer to the newly created hash table
 * 	or NULL if something went wrong
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash;

	hash = malloc(sizeof(hash_table_t));

	if (hash == NULL)
		return(NULL);

	hash->size = size;

	return(hash);
}
