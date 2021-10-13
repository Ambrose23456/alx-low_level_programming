#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 *add_nodeint_end - add nodes to the end of the linked list
 *@int: data to be passed into node
 *
 *Return: nothing
 */
listint_t *add_nodeint_end(listint_t **head, const int)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (head == NULL)
	{
		*head = new_node;
	}
	else
	{
		listint_t *lastNode = *head;

		while (lastNode != NULL)
		{
			lastNode = lastNode->next;
		}
		lastNode->next = new_node;
	}

}
