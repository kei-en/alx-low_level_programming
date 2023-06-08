#include "hash_tables.h"

/**
 * hash_table_set - Add or update an element in a hash table
 * @ht: The hash table
 * @key: The key
 * @value: The value associated with the key
 *
 * Return: 1 if success, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_hnode;
	char *copy;
	unsigned long int index, i;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	copy = strdup(value);
	if (copy == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = copy;
			return (1);
		}
	}

	new_hnode = malloc(sizeof(hash_node_t));
	if (new_hnode == NULL)
	{
		free(copy);
		return (0);
	}
	new_hnode->key = strdup(key);
	if (new_hnode->key == NULL)
	{
		free(new_hnode);
		return (0);
	}
	new_hnode->value = copy;
	new_hnode->next = ht->array[index];
	ht->array[index] = new_hnode;

	return (1);
}
