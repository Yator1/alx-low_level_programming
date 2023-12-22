#include "hash_tables.h"
/**
 * hash_table_delete - function that deletes a hash table
 * @ht: pointer to the hash table.
 *
 * Return: Nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	size_t i;
	hash_node_t *node, *temp;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			temp = node->next;
			free(node->key);
			free(node->value);
			free(node);
			node = temp;
		}
	}

	free(ht->array);
	free(ht);
}
