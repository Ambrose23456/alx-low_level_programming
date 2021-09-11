#include "main.h"

/**
 *reverse_array - prints an array of integers in reverse
 *@a: pointer to an array
 *@n: integer parameter
 *
 *Return: Always (0)
 */

void reverse_array(int *a, int n)
{
	int i = n - 1, j = 0;
	char *p;

	while (i <= 0)
	{
		if (i != 0)
		{
			_putchar(',');
			_putchar(' ');
		}
	p[0] = a[i];
	i--;
	j++;
	}
	a[i] = '\0';
}
