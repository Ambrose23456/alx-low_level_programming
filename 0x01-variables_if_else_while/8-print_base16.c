#include <stdio.h>

/**
 *main - entry point
 *
 *prints hexidecimal
 *
 *Return: sucess(0)
 */

int main(void)
{
	char c;

	for (c = 1; c <= 9; c++)
	{
		putchar(c);
	}
	for (c = 'A'; c <= 'F'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
