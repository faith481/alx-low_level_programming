#include "lists.h"

/**
 * print_list - prints all elements of listint_t list
 * @h: linked list of type listint_t to print
 * Return: number of nodes
 */

size_tt print_listint_t(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
	printf("%\n", h->n);
	num++;
	h = h->next;
	}
	return (num);
}