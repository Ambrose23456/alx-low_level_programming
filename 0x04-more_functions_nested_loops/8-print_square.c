#include "main.h"

/**
 *print_square - prints squares using #
 *@size: parameter to be passed into function
 *
 *Return: Always(0)
 */
void print_square(int size)
{
	if (size > 0)
	{
		int length = 0;
		int breadth;

		while (length <= size)
		{
			breadth = 0;
			while (breadth <= size)
			{
				_putchar('#');
				breadth++;
			}
			_putchar('\n');
			length++;
		}
	}
	_putchar ('\n');
}
