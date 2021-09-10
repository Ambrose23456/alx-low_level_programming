#include "main.h"

/**
 *_strncat - concatenates 2 strings
 *@dest: pointer to a char
 *@src: second pointer to char
 *@n: defined bytes
 *
 *Return: array of strings
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j;

	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;

	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
