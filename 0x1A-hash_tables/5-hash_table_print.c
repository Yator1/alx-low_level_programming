#include "hash_tables.h"
/**
 * hash_table_print - function that prints all the elements of a hash table
 * @ht: pointer to hash table
 *
 * Return: return nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	size_t i;
	hash_node_t *node;
	int first_ptr = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			if (first_ptr)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			first_ptr = 1;
			node = node->next;
		}
	}
	printf("}\n");
}
