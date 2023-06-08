#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table
 */
void hash_table_delete(hash_table_t *ht)
{
    hash_node_t *hnode, *temp;
    hash_table_t *head = ht;
    unsigned long int i;

    for (i = 0; i < ht->size; i++)
    {
        if (ht->array[i] != NULL)
        {
            hnode = ht->array[i];
            while (hnode != NULL)
            {
                temp = hnode->next;
                free(hnode->key);
                free(hnode->value);
                free(hnode);
                hnode = temp;
            }
        }
    }
    free(head->array);
    free(head);
}