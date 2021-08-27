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

	for (i = 97; i <= 122; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
