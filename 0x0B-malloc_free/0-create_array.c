#include "main.h"
#include <stdlib.h>

/**
 *create_array - array of chars initialized to a specific char
 *@size: size of a char array c
 *@c: char to be looped into an array
 *
 *Return: an array of chars
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *p;

	if (size <= 0)
		return (0);
	p = malloc(sizeof(char) * size);
	if (p != NULL)
	{
		for (i = 0; i < size; i++)
		{
			*(p + i) = c;
		}
	}
	return (p);
}
