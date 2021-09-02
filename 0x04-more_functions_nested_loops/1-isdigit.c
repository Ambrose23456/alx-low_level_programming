#include "main.h"

/**
 *_isdigit - checks if input is a digit between 0 and 9
 *@c: parameter to be passed into function
 *
 *Return: Always (0)
 */
int _isdigit(int c)
{
	if (c >= 0 && c >= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
