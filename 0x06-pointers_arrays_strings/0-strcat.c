#include "main.h"

/**
 *_strcat - concetenates two strings
 *@dest: pointer to char
 *@src: pointer to a char
 *
 *Return: returns a char
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++);

	for (j = 0; src[j] != '\0'; j++, i++)
	{
		dest[i] = src[j];
	}
	dest[i] = '\0';
	return (dest);
}