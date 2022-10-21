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
	hash_node_t *item, *temp;
	char *value_cp;

	if (key == NULL || *key == '\0' || ht == NULL || value == NULL)
		return (0);
	idx = key_index((unsigned char *)key, ht->size);
	value_cp = strdup(value);
	if (value_cp == NULL)
		return (0);
	item = malloc(sizeof(hash_node_t));
	if (item == NULL)
		return (0);
	item->key = strdup(key);
	if (item->key == NULL)
	{
		free(value_cp);
		free(item);
		return (0);
	}
	item->value = value_cp;
	item->next = NULL;
	if (ht->array[idx] == NULL)
		ht->array[idx] = item;
	else
	{
		temp = ht->array[idx];
		while (strcmp(temp->key, key) != 0 && temp->next != NULL)
			temp = temp->next;
		if (strcmp(temp->key, key) == 0)
		{
			free(item->key);
			free(item);
			free(temp->value);
			temp->value = value_cp;
			return (1);
		}
		item->next = ht->array[idx];
		ht->array[idx]->next = item;
	}
	return (1);
}
