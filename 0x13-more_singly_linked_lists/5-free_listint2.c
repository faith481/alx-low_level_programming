#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: pointer to the listint_t list to be fixed
 */

void free_listint2(listint_t)
{
	listint_t *temp;

	if (head == NULL)
	return;
	while (*head)
	{
	temp = (*head)->next;
	free (*head);
	*head = temp;
	head = NULL;
}
