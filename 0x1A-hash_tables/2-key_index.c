#include "hash_tables.h"

/**
 * key_index - function to give index of a key
 * @key: key of hash table
 * @size: size of array of hash table
 * Return: index at which key/value pair should be stored
 **/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	hash = hash_djb2(key);
	return (hash % size);
}
