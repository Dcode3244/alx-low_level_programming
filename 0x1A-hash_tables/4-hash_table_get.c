#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: the hash table you want to look into
 * @key: the key you are looking for
 *
 * Return: value associated with the element, or
 * NULL if key couldn't be found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i;
	hash_node_t *temp;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	for (i = 0; i < ht->size; i++)
	{
		temp = ht->array[i];
		if (temp != NULL)
		{
			while ((strcmp(temp->key, key) != 0) && temp->next != NULL)
			{
				temp = temp->next;
			}
			if (strcmp(temp->key, key) == 0)
				return (temp->value);
		}
	}
	return (NULL);
}
