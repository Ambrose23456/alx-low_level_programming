#include "main.h"
#include <string.h>

/**
 *print_rev - reverses a string
 *@s: string to be reversed
 *
 *Return: Always 0
 */
void print_rev(char *s)
{
	int i, l;

	l = strlen(s);

	for (i = l; i >= 0; i--)
	{
		if (s[i] == '\0')
			continue;
		_putchar(s[i]);
	}
	_putchar('\n');
}
