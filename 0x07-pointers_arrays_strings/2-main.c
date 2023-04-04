#include "main.h"
#include <stdio.h>

/**
 * main - where the compiler starts compiling
 *
 * Return: returns a zero when there's no error
 */
int main(void)
{
	char *s = "hello";
	char *f;

	f = _strchr(s, 'l');

	if (f != NULL)
	{
		printf("%s\n", f);
	}
	return (0);
}
