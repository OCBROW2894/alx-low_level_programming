#include <stdio.h>
#include "variadic_functions.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0 when correct.
 */
int main(void)
{
	int sum;

	sum = sum_them_all(325, 2749, 2894);
	printf("%d\n", sum);
	sum = sum_them_all(325, 2894, 2012, 2749, -1024);
	printf("%d\n", sum);    
	return (0);
}
