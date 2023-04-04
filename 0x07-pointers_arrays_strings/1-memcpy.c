#include "main.h"

/**
 * *_memcpy - function declaration
 * @dest: is the destination address
 * @src: is the source address
 * @n: is the number of times
 * Return: the function is a char data type hence returns a sring
 */

char *_memcpy(char *dest, char *src, unsigned int n);

/**
 * *_memcpy - function declaration
 * @dest: this is the destination address
 * @src: this is the source address
 * @n: the number of times to copy
 * Description:this function copies the src to dest n times
 * Return: this function returns a copied string because its a char data type
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
	{
		dest[index] = src[index];
	}
	return (dest);
}
