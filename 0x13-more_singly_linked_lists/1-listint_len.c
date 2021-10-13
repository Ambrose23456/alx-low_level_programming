#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <stddef.h>

 /**
  *listint_len - return the number of elements of a linked list
  *@h: pointer to linked list
  *
  *Return: length
  */
size_t listint_len(const listint_t *h)
{
	unsigned int count = 0;

	if (!h)
		return (0);
	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return ((size_t)count);
}

