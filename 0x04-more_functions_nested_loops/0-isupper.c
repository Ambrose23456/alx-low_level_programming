#include "main.h"

/**
 *_isupper - determines if a character is an uppercase letter
 *@c: parameter to be passed into function
 *
 *Return: Always(0)
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
