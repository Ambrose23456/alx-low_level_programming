#include <stdio.h>
#include <stdlib.h>


/**
 *main - entry point
 *
 *Return: Always0(Success)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
