#include "main.h"

/**
 * print_chessboard - this is the function declaration
 * @a: is the pointer array
 * Return: this user defined function has arguments but no return type
 */

void print_chessboard(char (*a)[8]);

/**
 * print_chessboard - function definition
 * @a: is the pointer array
 * Description: this program prints out the players arrangement when
 * starting a game
 * Returns: has no return type
 */

void print_chessboard(char (*a)[8])
{
	int row;
	int column;

	for (row = 0; row < 8; row++)
	{
		for (column = 0; column < 8; column++)
		{
			_putchar(a[row][column]);
		}
		_putchar('\n');
	}
}

