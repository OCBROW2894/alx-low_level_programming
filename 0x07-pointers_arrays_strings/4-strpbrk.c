#include "main.h"

/**
 * *_strpbrk - function declaration
 * @s:the string to search from
 * @accept: is bytes to search
 * Return: this function returns a pointer or NULL when
 * it doesnt find the string
 */

char *_strpbrk(char *s, char *accept);

/**
 * *_strpbrk - function definition
 * @s: is the string to be searched
 * @accept: is the bytes to search for
 * Description: this program searches for a string
 *of a set of bytes from the selected string
 * Return: this function returns a pointer to matched byte or NULL if no match
 */

char *_strpbrk(char *s, char *accept)
{
	int str_index;
	int sub_str_index;

	for (str_index = 0; s[str_index] != '\0'; str_index++)
	{
		for (sub_str_index = 0; accept[sub_str_index] != '\0'; sub_str_index++)
		{
			if (s[str_index] == accept[sub_str_index])
			{
				return (s + str_index);
			}
		}
	}
	return (0);
}
