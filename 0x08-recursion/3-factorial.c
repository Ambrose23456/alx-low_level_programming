#include "main.h"

/**
 *factorial - calcuates the factorial of a number
 *@n: integer paramter
 *
 *Return: the factorial of a number
 */
int factorial(int n)
{
	if (n == 0)
		return 1;
	if (n < 0)
		return -1;
	n = n * factorial(n - 1);
	return (n);
}
