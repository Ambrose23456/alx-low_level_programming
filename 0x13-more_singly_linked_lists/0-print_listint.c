#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

/**
 *print_listint - function to print linked list in C
 *@h: pointer to the node
 *
 *Return: returns count
 */
size_t print_listint(const listint_t *h)
{
	unsigned int count = 0;

	if (!h)
	{
		return (0);
	}
	else
	{
		while (h != NULL)
		{
		printf("%d\n", h->n);
		h = h->next;
		count++;
		}
	}
	return (count);
}
