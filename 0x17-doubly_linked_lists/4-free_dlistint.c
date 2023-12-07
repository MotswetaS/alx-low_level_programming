#include "lists.h"

/**
 * free_dlistint - s function will free a dlistint_t list.
 * @head: addressto head of the list
 * Return: null
 **/
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
	return;

	while (head->next)
	{
	head = head->next;
	free(head->prev);
	}
	free(head);
}
