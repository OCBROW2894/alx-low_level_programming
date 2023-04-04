#include "main.h"
#include <stdio.h>

/**
 * main - tell the compiler to start compiling
 *
 * Return: with zero errors it returns a zero
 */
int main(void)
{
	char *s = "Ochieng Bryian";
	char *f = "Ochieng";
	char *t;

	t = _strpbrk(s, f);
	printf("%s\n", t);
	return (0);
}
