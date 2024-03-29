#include <stdlib.h>
#include "lists.h"

/**
 * free_list - this function frees linkest list list_h
 * @head: list_t is the list to be freed
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
