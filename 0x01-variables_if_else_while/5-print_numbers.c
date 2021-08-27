#include <stdio.h>

/**
 *main - entry point
 *
 *i: conting integer
 *
 *prints numbers from 0 to 10 iteratively
 *
 *Return: success(0)
 */
int main(void)
{
	int i;

	for (i = 0; i <= 10; i++)
	{
		printf("%d", i);
	}
	printf("\n");
	return (0);
}
