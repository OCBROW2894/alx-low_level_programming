#include "main.h"

/**
 * *_memset - function declaration
 * @s: pointer to constant
 * @b: constant
 * @n: number of bytes
 * Return: pointer
 */

char *_memset(char *s, char b, unsigned int n);

/**
 * *_memset - function Declaration
 * @s: Is the pointer to a constant
 * @b: Is the constant to be used
 * @n: Is the maximum number of bytes
 * Description: this function fills a memory address with constant byte
 * Return:s function returns pointer s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;

	for (index = 0; n > 0; index++)
	{
		s[index] = b;
		n--;
	}

	return (s);
}
