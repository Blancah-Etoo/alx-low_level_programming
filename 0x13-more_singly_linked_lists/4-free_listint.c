#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees a listint_t list.
 * @head: a pointer to the head of the listint_t list to be freed
 * Return: Always 0
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
