#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *main - entry point
 *@argc:counts arg to command line
 *@argv: an array of argc
 *
 *Return: exit(0)
 */
int main(int argc, char *argv[])
{
	int mul;

	if (argc == 3)
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
