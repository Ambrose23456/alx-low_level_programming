#include <stdio.h>

/**
 *main - entry point
 *
 *prints the alphabets backwards
 *
 *Return: success(0)
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
