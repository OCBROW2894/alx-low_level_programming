#include "main.h"
#include <stdio.h>

/**
 * main - where the compiler starts compiling
 *
 * Return: returns a zero when there's no error
 */
int main(void)
{
	char *s = "Lord Bryian";
	char *f;

	f = _strchr(s, 'B');

	if (f != NULL)
	{
		printf("%s\n", f);
	}
	return (0);
}
