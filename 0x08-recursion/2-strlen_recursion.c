#include "main.h"

/**
 *_strlen_recursion - finds the lenghth of a string
 *@s: a pointer to an array of chars
 *
 *Return: the length of string
 */
int _strlen_recursion(char *s)
{
	static int length = 1;

	if (*s != '\0')
	{
		length++;
		return (1 + _strlen_recursion(s + 1));
	}
