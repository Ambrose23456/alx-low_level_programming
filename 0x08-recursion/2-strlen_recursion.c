#include "main.h"

/**
 *_strlen_recursion - finds the lenghth of a string
 *@s: a pointer to an array of chars
 *
 *Return: the length of string
 */
int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s == 0)
		return (0);

	length = _strlen_recursion(s + 1);

	return (length + 1);
}
