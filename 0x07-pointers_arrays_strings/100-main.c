#include "main.h"
#include <stdio.h>

/**
 * main - tells the compiler where to start
 *
 * Return: zero when has no errors
 */
int main(void)
{
	char *s0 = "Ochieng Bryian";
	char *s1 = "Hinata Hyuga";

	printf("%s, %s\n", s0, s1);
	set_string(&s1, s0);
	printf("%s, %s\n", s0, s1);
	return (0);
}
