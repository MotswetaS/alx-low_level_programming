#include "lists.h"

/**
 * add_nodeint_end - awe want to add a node at the end of listin_h
 * @head: pointer to the first element in the list
 * @n: data to insert in the new element
 *
 * Return: address of the new element , or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new;

	return (new);
}
