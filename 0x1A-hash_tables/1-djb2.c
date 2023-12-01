#include "hash_tables.h"

/**
 * hash_djb2.c - A hash function that implements djb2.c algorithm
 * @str: string used to generate hash variable
 * Return: hash variable
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c;
	}
	return (hash);
}
