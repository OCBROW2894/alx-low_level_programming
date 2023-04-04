#include "main.h"
#include <stdio.h>

/**
 * simple_print_buffer - prints buffer in hexadecimal
 * @buffer: Is the address of memory to print
 * @size: Is the size of the memory to print
 *
 * Return: this user defined function has arguments but no return value
 */
void simple_print_buffer(char *buffer, unsigned int size)
{
	unsigned int i;

	i = 0;
	while (i < size)
	{
		if (i % 10)
		{
			printf(" ");
		}
		if (!(i % 10) && i)
		{
			printf("\n");
		}
		printf("0x%02x", buffer[i]);
		i++;
	}
	printf("\n");
}

/**
 * main - where the compiler starts compiling
 *
 * Return: when the code runs correctly the function returns a zero
 * the printf that prints out Bryian is just there to seperate you can modify as you see fit 
 */
int main(void)
{
	char buffer[98] = {0};
	char buffer2[98] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};

	simple_print_buffer(buffer, 98);
	_memcpy(buffer + 50, buffer2, 10);
	printf("Bryian-------Bryian-----Bryian-------Bryian\n");
	simple_print_buffer(buffer, 98);
	return (0);
}
