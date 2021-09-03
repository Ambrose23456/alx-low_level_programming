#include "main.h"

/**
 *print_diagonal - prints a diagonal line
 *@n: parameters to be passed into function
 *
 *Return: Always(0)
 */
void print_diagonal(int n)
{
	if (n > 0)
	{
		while (n > 0)
		{
			_putchar('\\');
			n--;
		}
	}
	_putchar('\n');
}
