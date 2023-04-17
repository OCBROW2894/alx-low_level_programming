#include "1-pi.h"
#include <stdio.h>

/**
 * main - Calculates the area of a circle
 *
 * Return: Always 0 when correct.
 */
int main(void)
{
	float area;
	float radius;

	radius = 98;
	area = PI * radius * radius;
	printf("%.3f\n", area);
	return (0);
}
