#include "hash_tables.h"

/**
 * insert_node_at_beginning - adds a new node at the start of linked list
 * @head: first node of the singly-linked list
 * @node: new node to add - key/value pair
 */
void insert_node_at_beginning(hash_node_t **head, hash_node_t *node)
{
	if (*head == NULL)
		*head = node;

	node->next = *head;
	*head = node;
}

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table to add the key/value pair to
 * @key: the key to be hashed, cannot ve an empty string
 * @value: the value associated with the key
 *
 * Return: 1 if successful, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *hash_t_pair, *hash_t_curr, **hash_t_container;
	unsigned long int idx;
	char *val_dup;

	if (!ht || !key || !(*key) || !value)
		return (0);

	idx = key_index((unsigned char *)key, ht->size);
	hash_t_container = &(ht->array[idx]);
	hash_t_curr = ht->array[idx];

	val_dup = strdup(value);
	if (val_dup == NULL)
		return (0);

	while (hash_t_curr)
	{
		if (strcmp(hash_t_curr->key, key) == 0)
		{
			free(hash_t_curr->value);
			hash_t_curr->value = val_dup;
			return (1);
		}
		hash_t_curr = hash_t_curr->next;
	}

	hash_t_pair = malloc(sizeof(hash_node_t));
	if (hash_t_pair == NULL)
	{
		free(val_dup);
		return (0);
	}

	hash_t_pair->key = strdup(key);
	if (hash_t_pair->key == NULL)
	{
		free(val_dup);
		free(hash_t_pair);
		return (0);
	}

	hash_t_pair->value = val_dup;
	hash_t_pair->next = NULL;

	/* case index is not taken, place the new key-value pair here. */
	if (*hash_t_container == NULL)
	{
		*hash_t_container = hash_t_pair;
		return (1);
	}

	/* case there is a collision, add new node at start. */
	if (*hash_t_container && strcmp((*hash_t_container)->key, key) != 0)
		insert_node_at_beginning(&(*hash_t_container), hash_t_pair);

	return (1);
}
