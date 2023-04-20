#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index - indexes the array
 * @array: array to go through for answer
 * @size: size of array to go through
 * @cmp: function to do something with size of it
 * Return: int value when correct
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]))
			return (index);
	}
	return (-1);
}
