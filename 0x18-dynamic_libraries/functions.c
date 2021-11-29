#include "main.h"

int _putchar(char c)
{
	return (0);
}

/**
 * _islower - if the character is lowercase
 * @c:  is the int that will use for the argument of the function
 * Return: 1 if lowercase character 0 if not
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}



/**
 * _isalpha - checks if the parameter is an alpahbet
 * @c:  variable to pass into function
 * Return: 1 if input is an alphabet; else 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}


/**
 *_abs - computes the absolute value of an integer
 *@n: the variable to be passed in the function
 *
 *Return: absolute value
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (n * -1);
	}
}


/**
 *_isupper - determines if a character is an uppercase letter
 *@c: parameter to be passed into function
 *
 *Return: Always(0)
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}


/**
 *_isdigit - checks if input is a digit between 0 and 9
 *@c: parameter to be passed into function
 *
 *Return: Always (0)
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}


/**
 *_strlen - calculates the length of a string
 *@s: pointer to string
 *
 *Return: the length of a string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}


/**
 *_puts - prints a string to stdout
 *@str: string to be outputed
 *
 *Return: Always(0)
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
char *_strcpy(char *dest, char *src)
{
	return ("");
}
int _atoi(char *s)
{
	return (0);
}


/**
 * _strcat - a function that concatenates two strings
 * @dest: copy to
 * @src: copy from
 * Return: two concat strings
 */
char *_strcat(char *dest, char *src)
{
	int i, n;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}

	for (n = 0; (dest[i + n] = *src++) != '\0'; n++)
	{
	}

	return (dest);
}
char *_strncat(char *dest, char *src, int n)
{
	return ("");
}
char *_strncpy(char *dest, char *src, int n)
{
	return ("");
}
int _strcmp(char *s1, char *s2)
{
	return (0);
}
char *_memset(char *s, char b, unsigned int n)
{
	return ("");
}
char *_memcpy(char *dest, char *src, unsigned int n)
{
	return ("");
}
char *_strchr(char *s, char c)
{
	return ("");
}
unsigned int _strspn(char *s, char *accept)
{
	return (0);
}
char *_strpbrk(char *s, char *accept)
{
	return ("");
}
char *_strstr(char *haystack, char *needle)
{
	return ("");
}
