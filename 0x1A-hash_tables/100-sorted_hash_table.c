#include "hash_tables.h"

/**
 * shash_table_create - creates a sorted hash table
 * @size: size of the hash table
 * Return: a new hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	unsigned long int i;
	shash_table_t *shash;

	shash = malloc(sizeof(shash_table_t));
	if (shash == NULL)
		return (NULL);

	shash->size = size;
	shash->array = malloc(sizeof(shash_node_t *) * size);
	if (shash->array == NULL)
	{
		free(shash);
		return (NULL);
	}
	shash->shead = NULL;
	shash->stail = NULL;

	for (i = 0; i < size; i++)
		shash->array[i] = NULL;

	return (shash);
}

/**
 * shash_table_set - adds element to the hash table
 * @ht: the hash table
 * @key: the key
 * @value: the value associated with the key
 *
 * Return: 1 if it succeded, 0 otherwise
 */

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx, i, num = 0;
	shash_node_t *item, *head;

	if (key == NULL || *key == '\0' || ht == NULL || value == NULL)
		return (0);

	item = malloc(sizeof(shash_node_t));
	if (item == NULL)
		return (0);

	idx = key_index((unsigned char *)key, ht->size);
	item->key = strdup(key);
	if (item->key == NULL)
	{
		free(item);
		return (0);
	}
	item->value = strdup(value);
	if (item->value == NULL)
	{
		free(item->key);
		free(item);
		return (0);
	}
	if (ht->array[idx] == NULL)
	{
		ht->array[idx] = item;
		ht->array[idx]->next = NULL;
	}
	else if (strcmp(ht->array[idx]->key, key) == 0)
		strcpy(ht->array[idx]->value, value);
	else
	{
		item->next = ht->array[idx];
		ht->array[idx] = item;
	}

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] == NULL)
			continue;
		num++;
		if (num > 1)
			break;
	}
	if (num == 1)
	{
		ht->array[idx]->sprev = NULL;
		ht->array[idx]->snext = NULL;
		ht->shead = ht->array[idx];
		ht->stail = ht->array[idx];
		return (1);
	}

	head = ht->shead;
	if (*(head->key) > *key)
	{
		ht->array[idx]->snext = head;
		ht->array[idx]->sprev = NULL;
		ht->shead = ht->array[idx];
		head->sprev = ht->array[idx];
		return (1);
	}
	head = ht->shead;
	while ((head->snext != NULL) && ((*(head->key)) < (*(item->key))))
		head = head->snext;

	if ((head->snext == NULL) && ((*(head->key)) < (*(item->key))))
	{
		ht->stail = ht->array[idx];
		ht->array[idx]->snext = NULL;
		ht->array[idx]->sprev = head;
		head->snext = ht->array[idx];
		return (1);
	}
	ht->array[idx]->snext = head;
	ht->array[idx]->sprev = head->sprev;
	head->sprev->snext = ht->array[idx];
	head->sprev = ht->array[idx];

	return (1);
}

/**
 * shash_table_get - retrieves a value associated with a key
 * @ht: the hash table
 * @key: the key
 *
 * Return: value associated with the key
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *temp;

	temp = ht->shead;

	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
			return (temp->value);

		temp = temp->snext;
	}
	return (NULL);
}

/**
 * shash_table_print - prints a hash table value
 * @ht: the hash table
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *temp;
	int j = 0;

	temp = ht->shead;
	printf("{");
	while (temp != NULL)
	{
		if (j != 0)
			printf(", ");
		j = 1;
		printf("'%s': '%s'", temp->key, temp->value);
		temp = temp->snext;
	}
	printf("}\n");
}


/**
 * shash_table_print_rev - prints a hash table in raverse
 * @ht: the hash table
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *temp;
	int j = 0;

	temp = ht->stail;
	printf("{");
	while (temp != NULL)
	{
		if (j != 0)
			printf(", ");
		j = 1;
		printf("'%s': '%s'", temp->key, temp->value);
		temp = temp->sprev;
	}
	printf("}\n");
}

/**
 * shash_table_delete - deletes a hash table
 * @ht: the hash table
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *front, *temp;

	front = ht->shead;
	while (front != NULL)
	{
		temp = front->snext;
		free(front->key);
		free(front->value);
		free(front);
		front = temp;
	}

	free(ht->array);
	free(ht);
}