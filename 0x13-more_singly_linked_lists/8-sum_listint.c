#include "lists.h"

/**
 * sum_listint - will calculate the sum of all data in the linked list
 * @head: sum of all data
 * Return: the resulting sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}

