#include "main.h"
#include <stdio.h>

/**
 *main - entry point of program
 *@argc - count comman line arguments
 *@argv - Argument vector
 *
 *Return: exit(0)
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
