#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @temp: pointer to the list_t list to print
 *
 * Return: the number of nodes to be printed
 */

size_t print_list(const list_t *h)
{
	unsigned int count = 0;

	const list_t *temp;

	temp = h;
	while (temp != 0)
	{
	if (temp->str == NULL)
	printf("[0] (nil)\n");
	else
	printf("[%u] %s\n", temp->len, temp->str);
	temp = temp->next;
	count++;
	}
	return (count);
}
