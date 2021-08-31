#include "main.h"

/**
 * _isalpha - checks if the parameter is an alpahbet
 * @c:  variable to pass into function
 * Return: 1 if input is an alphabet; else 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
