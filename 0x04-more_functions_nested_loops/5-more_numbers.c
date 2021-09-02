#include "main.h"

/**
 *more_numbers - prints 0 to 14 ten times
 *
 *Return: void
 */
void more_numbers(void)
{
	int num;
	int i = 0;

	while (i <= 10)
	{
		num = 0;
		while (num <= 14)
		{
			if (num >= 10)
				_putchar((num / 10) + '0');
			_putchar((num % 10) + '0');
			num++;
		}
		i++;
		_putchar('\n');
	}
}
