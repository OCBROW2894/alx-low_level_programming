#include "main.h"
#include <stdio.h>

/**
 * main - tells the compiler where to start compiling
 *
 * Return: when the program runs correctly it returns a zero
 */
int main(void)
{
	char *s = "Ochieng Bryian";
	char *f = "gnechO";
	unsigned int n;

	n = _strspn(s, f);
	printf("%u\n", n);
	return (0);
}
