#include "main.h"

/**
 *string_toupper - changes an array to uppercases
 *@s: array of character
 *
 *Return: char
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != 0; i++)
	{
		if (s[i] >= 90 && s[i] <= 122)
		{
			s[i] = s[i] - 32;
		}
	}
	return (s);
}
