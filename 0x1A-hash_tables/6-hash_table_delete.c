#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: the hash table to be deleted
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *temp, *prev;

	for (i = 0; i < ht->size; i++)
	{
		temp = ht->array[i];
		prev = ht->array[i];
		if (temp != NULL)
		{
			while (temp != NULL)
			{
				prev = prev->next;
				free(temp->value);
				free(temp->key);
				free(temp);
				temp = prev;
			}
		}
	}

	free(ht->array);
	free(ht);
}
