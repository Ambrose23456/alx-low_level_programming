#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *main - entry point
 *@argc: count of arguments passed into the command line
 *@argv: a string indexing argc
 *
 *Return: exit(0)
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		
		if (*argv[i] >= 48 && *argv[i] <= 57)
		{
			sum = sum + atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
