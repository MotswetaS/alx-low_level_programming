#include "lists.h"

/**
 * sum_listint - returns sum of data in linkist listint_t
 * @head: first node in the linked list
 *
 * Return: rturns sum or 0 if empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
