#include "main.h"

/**
 * _strspn - function declaration
 * @s: source string of the program which is in three_main.c
 * @accept: picks the prefix substring
 * Return: is the number of bytes to be returned
 */

unsigned int _strspn(char *s, char *accept);

/**
 * _strspn -is the function definition
 * @s: is the string to search
 * @accept:is the the prefic substring to be tested
 * Description: returns number of bytes in which s only has bytes from accept
 * 
 * Return: is the  number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
			{
				bytes++;
				break;
			}
			else if (accept[index + 1] == '\0')
			{
				return (bytes);
			}
		}
		s++;
	}
	return (bytes);
}
