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

	r = _pow_recursion(4, 10);
	printf("%d\n", r);
	r = _pow_recursion(2894, 0);
	printf("%d\n", r);
	r = _pow_recursion(20, 16);
	printf("%d\n", r);
	r = _pow_recursion(50, 2);
	printf("%d\n", r);
	r = _pow_recursion(50, -2);
	printf("%d\n", r);
	r = _pow_recursion(-50, 3);
	printf("%d\n", r);
	return (0);
}
