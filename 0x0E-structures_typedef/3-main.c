#include <stdio.h>
#include "dog.h"

/**
 * main - tells the compiler where to start compiling
 *
 * Return: Always 0 when correct.
 */
int main(void)
{
	guok my_dog;

	my_dog.name = "Nala";
	my_dog.age = 11.5;
	my_dog.owner = "Pain";
	printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
	return (0);
}
