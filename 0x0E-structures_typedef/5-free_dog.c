#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_dog - frees the dog
 * guok: means dog in LUO
 * @guok: dog to free
 */
void free_dog(dog_t *guok)
{
	if (guok != NULL)
	{
		free(guok->name);
		free(guok->owner);
		free(guok);
	}
}
