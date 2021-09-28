#include <stdlib.h>
#include "dog.h"

/**
 *free_dog - Frees memory allocated to dog struct
 *@d: struct pointer
 *
 *Return: nothing
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
