#include "lists.h"

/**
 * free_listint - will write a function that fress the linked list
 * @head: the list will be freed
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}

