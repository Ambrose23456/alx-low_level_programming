#include <stdio.h>

/**
 *main - entry point
 *
 *prints the alphets but omits two letters
 *
 *Return: Success (0)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
			if (c == 'q' || c == 'e')
				continue;
	}
	return (0);
}