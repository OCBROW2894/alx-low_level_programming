#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int r;

	r = factorial(10);
	printf("%d\n", r);
	r = factorial(50);
	printf("%d\n", r);
	r = factorial(100);
	printf("%d\n", r);
	r = factorial(2894);
	printf("%d\n", r);
	return (0);
}
