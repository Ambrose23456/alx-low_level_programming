#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <stddef.h>

/**
 *add_nodeint - appends a node in front of a linked list
 *@head: struct pointer
 *@n: integer
 *
 * Return: noththing
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp = malloc(sizeof(listint_t));

	if (temp == NULL)
		exit(86);
	temp->n = n;
	temp->next = NULL;
	if (head == NULL)
	{
		*head = temp;
	}
	else
	{
		temp->next = *head;
		*head = temp;
	}
	return (*head);
}
