#include "hash_tables.h"

/**
 * hash_table_set - function that adds an elements to the hash table
 * @ht: the hash table
 * @key: the key
 * @value: the value of the key
 *
 * Return: 1 on success and 0 on failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node, *temp;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	new_node = create_hash_node(key, value);
	if (new_node == NULL)
		return (0);

	temp = ht->array[index];
	ht->array[index] = new_node;
	new_node->next = temp;

	return (1);
}

/**
 * create_hash_node - Function that creates a hash node
 * @key: the key
 * @value: value associated with the key
 *
 * Return: pointer to the new node
 */
hash_node_t *create_hash_node(const char *key, const char *value)
{
	hash_node_t *new_node = malloc(sizeof(hash_node_t));

	if (new_node == NULL)
		return (NULL);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;

	return (new_node);
}
