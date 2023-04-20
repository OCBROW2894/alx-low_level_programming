#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - print the specified name
 * @name: name to be printed
 * @f: function to be used
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
