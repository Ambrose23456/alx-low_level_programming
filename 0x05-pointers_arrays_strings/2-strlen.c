#include "main.h"

/**
 *_strlen - calculates the length of a string
 *@s: pointer to string
 *
 *Return: the length of a string
 */
int _strlen(char *s)
{
	int i;
	
	while (s[i] != '\0' )
		++i;
	return (i);
}
