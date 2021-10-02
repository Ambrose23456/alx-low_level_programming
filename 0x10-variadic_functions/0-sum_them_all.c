#include <stdarg.h>
#include "variadic_functions.h"

/**
 *sum_them_all - adds a variable number of arguments
 *@n: last arg before variable ...
 *
 *Return: 0 if n is null or n
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int sum = 0;
	unsigned int i;

	va_start(ap, n);
	if (n == 0)
	{
		return (0);
	}
	else if (n > 0)
	{
		for (i = 0; i < n; i++)
			sum = sum + va_arg(ap, int);
	}
	va_end(ap);
	return (sum);
}
