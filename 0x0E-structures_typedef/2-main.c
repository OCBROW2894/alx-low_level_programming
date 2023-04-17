#include <stdio.h>
#include "dog.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	struct dog my_dog;

	my_dog.name = "Nala";
	my_dog.age = 11.5;
	my_dog.owner = "Pain";
	print_dog(&my_dog);
	return (0);
}
