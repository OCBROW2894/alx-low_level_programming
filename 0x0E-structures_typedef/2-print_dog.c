#include "dog.h"
#include <stdio.h>
/**
 * print_dog - prints dog variables/components
 * @d: struct of dog
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			printf("Dog's Name: (nil)\n");
		else
			printf("Dog's Name: %s\n", d->name);

		printf("Age: %f\n", d->age);
		if (d->owner == NULL)
			printf("Dog's Owner: (nil)\n");
		else
			printf("Dod's Owner: %s\n", d->owner);
	}
}
