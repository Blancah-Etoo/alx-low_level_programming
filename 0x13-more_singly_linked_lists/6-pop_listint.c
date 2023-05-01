#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - delete the head node of a linked list
 * @head: pointer to the first element in the linked list
 *
 * Return: the data inside element that was deleted
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
