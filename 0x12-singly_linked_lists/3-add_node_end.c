#include "lists.h"
#include <string.h>

/**
 * add_node_end - add a new node at the end of a list_t list
 * @head: the pointer to the pointer pointing to the first node
 * @str: the value of the new node
 *
 * Return: pointer to the new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *dup;
	int len;
	list_t *new;
	list_t *traverse;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	dup = strdup(str);
	if (dup == NULL)
	{
		free(new);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	new->str = dup;
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		traverse = *head;
		while (traverse->next != NULL)
			traverse = traverse->next;
	
		traverse->next = new
	}

	return (new);
}
