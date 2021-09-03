#include "main.h"

/**
0;136;0c *print_diagonal - prints a diagonal line
 *@n: parameters to be passed into function
 *
 *Return: Always(0)
 */
void print_diagonal(int n)
{
	if (n > 0)
	{
		int j = 0;

		while (j < n)
		{
			int i;

			for (i = 1; i <= j; i++)
			{
				_putchar(' ');
			} 
			_putchar('\\');
			_putchar('\n');
			j++;
		}
	}
	else
		_putchar('\n');
}
