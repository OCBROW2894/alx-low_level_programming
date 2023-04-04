#include "main.h"
#include <stdio.h>

/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to be printed
 * @size: the size of the memory to be printed
 *
 * Return: this user defind function has arguments but no return value
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
 * Return: when the code runs correctly it returns a zero
 */
int main(void)
{
	char buffer[98] = {0x00};

	simple_print_buffer(buffer, 98);
	_memset(buffer, 0x01, 95);
	printf("Bryian***Bryian***Bryian***Bryian\n");
	simple_print_buffer(buffer, 98);
	return (0);
}
