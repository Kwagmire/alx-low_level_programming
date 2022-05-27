#include "lists.h"

/**
 * insert_nodeint_at_index - insert a new node into a listint_t list
 *			     at a given position
 * @head: pointer to the pointer pointing to the head of the list
 * @idx: index of the list where the new node should be added
 * @n: the value of the node
 *
 * Return: the address of the new node or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	unsigned int i;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for (i = 0; i < (idx - 1); i++)
	{
		if (*head == NULL || (*head)->next == NULL)
		{
			free(new);
			return (NULL);
		}

		*head = (*head)->next;
	}

	new->next = (*head)->next;
	(*head)->next = new;
	return (new);
}
