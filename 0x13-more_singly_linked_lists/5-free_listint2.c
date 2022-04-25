#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list.
 * @head: Pointer to pointer to the first element of a linked list.
 * Return: nothing.
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (head && (*head))
	{
		temp = (*head)->next;
		free((*head));
		(*head) = temp;
	}
}
