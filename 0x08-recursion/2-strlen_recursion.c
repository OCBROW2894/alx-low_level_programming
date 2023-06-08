#include "main.h"

/**
 * _strlen_recursion - function declaration
 * Main: where the compiler start compiling
 * @s: the string
 * Return: string length
 */

int _strlen_recursion(char *s);

int main(void)
{
	_strlen_recursion("Hashirama Senju");
}

/**
 * _strlen_recursion - function definition
 * @s: the string to measure
 * Description: finds the length of a string
 * using recursion
 * Return: the string length
 */

int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s)
	{
		length = _strlen_recursion(s + 1);
		return (length = length + 1);
	}
	return (0);
}
