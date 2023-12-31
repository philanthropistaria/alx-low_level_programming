#include "lists.h"

/**
 * pop_listint - will delete the head note of the linked list
 * @head: pointer in the first element in th elinked list
 * Return: will return the head notes data or zero if the linked list is empty
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

