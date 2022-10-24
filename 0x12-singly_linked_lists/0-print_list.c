#include "lists.h"
/**
 * print_list - elements of a list_t list.
 * @h: singly linked list
 * Return: number of nodes
 *
 * Description: singly linked list node structure
 */

size_t print_list(const list_t *h)
{
	size_t num;
	num = 0;
	while (h != NULL)
	{

		if (h->str != NULL)
		{
			printf("%d" "%s\n", h->len, h->str);
			h = h->next;
			num++;
		}
		else
		{
			printf("[%d] %s\n", 0, "(nil)");
		}
	}
	return(num);

}

