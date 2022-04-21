#include "lists.h"

/**
 * print_list - singly linked list
 * @h: points
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	int count = 0;
	char *str;
	unsigned int n;

	while (h != NULL)
	{
		str = h->str;
		n = h->len;
		if (str == NULL)
		{
			str = "(nil)";
			n = 0;
		}
		printf("[%d] %s\n", n, str);

		h = h->next;
		count++;
	}
	return (count);
}
