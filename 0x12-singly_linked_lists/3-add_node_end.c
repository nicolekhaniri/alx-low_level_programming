#include "lists.h"

/*
 * add_node - adds a new node at the end of a list_t list
 * @head: head of linked list
 * @str: string to store list
 * Return: address of the new element, or NULL if it failed
 *
 * Description: add node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new, *temp;
	size_t n;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new->str = strdup(str);

	for (n = 0; str[n]; n++)
		;

	new->len = n;
	new->next = NULL;

	if (temp == NULL)
	{
		*head = new;
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}

	return (*head);
}
