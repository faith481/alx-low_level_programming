#include "main.h"

/**
 * print_square - print n squares according n number of times
 * @size: The number of squares /numbers of times
 * return: empty
 */

void print_square(int size)
{
	int x, y;

	if (size  <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (x = 0; x < size; x++)
	{
	for (y = 0; y < size; y++)
	{
	_putchar(35);
	}
	_putchar('\n');
	}
	}
}
