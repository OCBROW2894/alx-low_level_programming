#include <stdio.h>
#include "dog.h"

/**
 * main- where the compiler starts compiling
 *
 * Return: Always retun 0 when correct.
 */
int main(void)
{
	struct dog my_dog;

	init_dog(&my_dog, "Nala", 11.5, "Pain");
	printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
	return (0);
}
