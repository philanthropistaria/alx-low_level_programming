#include "lists.h"

/**
 * add_nodeint - will add a new node at the beginning of the linked list
 * @head: pointer in the first node
 * @n: the data thatis inserted in the new node
 * Return: a pointer to the new node or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}

