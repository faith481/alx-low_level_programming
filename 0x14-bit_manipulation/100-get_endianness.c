#include "main.h"

/**
 * get_endianness - checks if a machine is little or big endian
 * Return: 0 is for big, 1 is for little
 */

int get_endianness(void)
{
	unsigned int index = 1;
	char *c = (char *) & index;

	return (*c);
}
