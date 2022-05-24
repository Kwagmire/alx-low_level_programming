#include "lists.h"

/**
 * print_it - print the elements
 * @h: a pointer to a list_t node
 *
 * Return: the number of elements
 */
size_t print_it(const list_t *h)
{
	if (h == NULL)
		return (0);

	if (h->str == NULL)
	{
		printf("[0] (nil)\n");
	}
	else
		printf("[%d] %s\n", h->len, h->str);

	return (1 + print_it(h->next));
}
/**
 * print_list - print the elements of a list_t list
 * @h: a pointer to a list_t list
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{

	if (h == NULL)
		return (-1);

	return (print_it(h));
}
