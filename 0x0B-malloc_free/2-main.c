#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code for ALXSchool students.
 *
 * Return: Always 0 when correct.
 */
int main(void)
{
	char *s;

	s = str_concat("Nagato ", "Uzumaki");
	if (s == NULL)
	{
		printf("failed\n");
		return (1);
	}
	printf("%s\n", s);
	free(s);
	return (0);
}
