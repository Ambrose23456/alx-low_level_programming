#include "main.h"

/**
 *main - entry point
 *
 *0-holberton: program prints every letter of the word Holberton
 *
 *Return: sucess(0)
 */
int main(void)
{
	char *h = "_putchar";
	unsigned int i;

	for (i = 0; i < sizeof(h); i++)
	{
		_putchar(h[i]);
	}
	_putchar('\n');
	return (0);
}
