#include <stdio.h>
#include "3-function_like_macro.h"

/**
 * main - computes absolute value
 *
 * Return: Always 0 when correct.
 */
int main(void)
{
	int o;
	int b;

	o = ABS(-98) * 10;
	b = ABS(98) * 10;
	printf("%d, %d\n", o, b);
	return (0);
}
