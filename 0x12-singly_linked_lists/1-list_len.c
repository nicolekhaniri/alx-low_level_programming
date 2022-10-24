#include "lists.h"
/**
 * list_len - number of elements in a list.
 * @h: singly linked list
 * Return: number of elements
 *
 * Description: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t num;
	num = 0;

	while (h != NULL)
	{
		h = h->next;
		num++;
	}
	return(num);
}
