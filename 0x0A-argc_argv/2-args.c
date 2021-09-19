#include "main.h"
#include <stdio.h>

/**
 *main - entry point
 *@argc: counts arguments passed to command line
 *@argv: an array of argc
 *
 * Return: exit (0);
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
