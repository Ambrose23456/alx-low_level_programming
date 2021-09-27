#include "dog.h"

/**
 *init_dog - struct function
 *@d: a char
 *@name: a char
 *@owner: a char
 *
 *Description: a long description
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
