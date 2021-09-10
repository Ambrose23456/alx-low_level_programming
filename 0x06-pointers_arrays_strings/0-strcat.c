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
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	dest[i] = '\0';
	return (dest);
}
