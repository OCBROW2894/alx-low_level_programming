#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * new_dog - creates new dog
 * @name: name of the dog
 * guok: means dog in LUO
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: a dog objec when correct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i, len1, len2;
	dog_t *guok;
	char *a, *b;

	len1 = 0;
	for (i = 0; name[i] != '\0'; i++)
		len1++;
	len2 = 0;
	for (i = 0; owner[i] != '\0'; i++)
		len2++;
	guok = malloc(sizeof(dog_t));
	if (guok == NULL)
		return (NULL);
	a = malloc((len1 + 1) * sizeof(char));
	if (a == NULL)
	{
		free(guok);
		return (NULL);
	}
	for (i = 0; i < len1; i++)
		a[i] = name[i];
	a[i] = '\0';
	guok->name = a;
	guok->age = age;
	b = malloc((len2 + 1) * sizeof(char));
	if (b == NULL)
	{
		free(a);
		free(guok);
		return (NULL);
	}
	for (i = 0; i < len2; i++)
		b[i] = owner[i];
	b[i] = '\0';
	guok->owner = b;
	return (guok);
}
