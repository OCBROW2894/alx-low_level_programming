#include <stdio.h>
#include "dog.h"

/**
 * main - where the compiler starts compiling
 *
 * Return: Always 0 when correct.
 */
int main(void)
{
	dog_t *my_dog;

	my_dog = new_dog("Nala", 11.5, "Pain");
	printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog->name, my_dog->age);
	return (0);
}
