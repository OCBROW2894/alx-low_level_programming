#include "main.h"
#include <stdio.h>

/**
 * main - tell the compiler where to start from
 *
 * Return: should return a zero elseerror occured
 */
int main(void)
{
	char *s = "Lord Bryian";
	char *f = "Bryian";
	char *t;

	t = _strstr(s, f);
	printf("%s\n", t);
	return (0);
}
