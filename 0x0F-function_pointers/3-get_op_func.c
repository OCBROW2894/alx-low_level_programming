#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * get_op_func - gets the right function to be used
 * @s: function s to be used
 * Return: int value when correct
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int index;

	index = 0;
	while (ops[index].f != NULL)
	{
		if (*s == *(ops[index].op) && s[1] == '\0')
			return (ops[index].f);
		index++;
	}

	printf("Error\n");
	exit(99);
}
