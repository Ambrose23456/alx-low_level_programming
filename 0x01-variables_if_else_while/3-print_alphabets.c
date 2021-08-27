#include <stdio.h>

/**
 *main - starting point of code
 *
 *prints alphabets in lower and upper cases
 *
 *Return: Success(0)
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	for (c = 'A'; c <= 'Z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
