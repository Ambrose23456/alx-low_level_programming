#include <stdlib.h>
#include <time.h>
/**
 *
 *main: starting point of function
 *
 *n: is an integer variable
 *
 *Return: Sucess (0)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive", n);
	}
	else if (n == 0)
	{
		printf("%d is zero", n);
	}
	else
	{
		printf("%d is negative", n);
	}
	return (0);
}