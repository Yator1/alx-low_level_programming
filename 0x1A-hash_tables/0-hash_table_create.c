#include "hash_tables.h"
/**
  * hash_table_create - function that create a hash table
  * @size: size of the hash table
  *
  * Return: return a pointer to the table
  */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = malloc(sizeof(hash_table_t));
	unsigned long int n;

	if (table == NULL)
		return (NULL);
	table->size = size;
	table->array = (hash_node_t **) calloc(size, sizeof(hash_node_t *));
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}

	for (n = 0; n < size; n++)
	{
		table->array[n] = NULL;
	}

	return (table);
}
