#include "main.h"

/**
 * *_strstr - is the function declaration
 * @haystack: is the string to be searched
 * @needle: the substring to search for
 * Return: same as the return below
 */

char *_strstr(char *haystack, char *needle);

/**
 * *_strstr - function definition
 * @haystack: that string that will be searched
 * @needle: the substring to search for
 * Description: search for needle in haystack
 * Return: the function returns a string or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int hay_index;
	int needle_index;

	if (needle[0] == '\0')
	{
		return (haystack);
	}

	for (hay_index = 0; haystack[hay_index] != '\0'; hay_index++)
	{
		if (haystack[hay_index] == needle[0])
		{
			for (needle_index = 0; needle[needle_index] != '\0'; needle_index++)
			{
				if (haystack[hay_index + needle_index] != needle[needle_index])
				{
					break;
				}
			}
			if (needle[needle_index] == '\0')
			{
				return (haystack + hay_index);
			}
		}
	}
	return ('\0');
}
