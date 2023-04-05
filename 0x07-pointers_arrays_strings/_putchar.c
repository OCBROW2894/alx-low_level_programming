#include <unistd.h>

/**
 * _putchar - this function prints/writes c
 * @c: is the character to print
 * Return: this function returns 1 when successful else -1 error
 */

int _putchar(char c)
{
	return(write(1, &c, 1));
}
