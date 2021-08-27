#include <stdio.h>

/**
 *main - entry point
 *
 *prints all lower cases of the alphabets
 *
 *Return: success(0)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');
	return (0);
}
