#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node of a listint_t
 * linked list.
 * @head:Pointer to the first element of a linked list.
 * @index: The index of the node, starting at 0
 * Return: the nth node of a listint_t linked list.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int posicion = 0;

	if (head == NULL)
		return (NULL);
	while (posicion < index)
	{
		if (head->next == NULL)
			return (NULL);
		head = head->next;
		posicion++;
	}
	return (head);
}
