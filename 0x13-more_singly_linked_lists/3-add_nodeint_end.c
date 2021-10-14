#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 *add_nodeint_end - add nodes to the end of the linked list
 *@head: pointer to struct
 *@n: data to be passed into node
 *
 *Return: nothing
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node)
	{
		new_node->n = n;
		new_node->next = NULL;
	}
	else
	{
		exit(92);
	}

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		listint_t *lastNode = *head;
		int i = 0;

		while (lastNode->next != NULL)
		{
			i++;
			lastNode = lastNode->next;
		}
		lastNode->next = new_node;
	}
	return (*head);

}
