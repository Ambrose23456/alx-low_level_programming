#include "main.h"

/**
 *print_rev - reverses a string
 *@s: string to be reversed
 *
 *Return: Always 0
 */
void print_rev(char *s)
{
	int l = 0;

	while (s[l] != '\0')
		l++;
	while (l >= 0)
	{
		_putchar(s[l]);
		l--;
	}
	_putchar('\n');
}
