#include "main.h"

/**
 *times_table - print the multiplication table
 *@c: variable to count and multiply
 *@j: variable to count and multiply
 *
 *Return: always(void)
 */
void times_table(void)
{
	int c = 0;
	int j;

	while (c < 10)
	{
		j = 0;
		while (j < 10)
		{
			int mul = c * j;
			j++;
			_putchar(mul + '0');
		}
		_putchar('\n');
		c++;
	}
}
