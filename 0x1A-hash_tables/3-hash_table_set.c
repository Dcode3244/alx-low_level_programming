#include "hash_tables.h"

/**
 * hash_table_set - adds element to the hash table
 * @ht: the hash table
 * @key: the key
 * @value: the value associated with the key
 *
 * Return: 1 if it succeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *item;

	if (key == NULL or *key == '\0')
		return (0);

	item = malloc(sizeof(hash_node_t));
	if (item == NULL)
		return (0);

	idx = key_index((unsigned char *)key, ht->size);

	item->key = strdup(key);
	if (item->key == NULL)
		return (0);

	item->value = strdup(value);
	if (item->value == NULL)
		return (0);

	if (ht->array[idx] == NULL)
	{
		ht->array[idx] = item;
		ht->array[idx]->next = NULL;
	}
	else if (strcmp(ht->array[idx]->key, key) == 0)
	{
		strcpy(ht->array[idx]->value, value);
	}
	else
	{
		item->next = ht->array[idx];
		ht->array[idx] = item;
	}

	return (1);
}
