#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - a new node added to the start for s linked list
 * @head: double points directly to list_t list
 * @str: a new string is forrmed
 *
 * Return: the address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
