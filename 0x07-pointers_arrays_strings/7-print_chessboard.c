#include "main.h"

/**
 * print_chessboard - prints an array of chars as a chessboard
 * @a: the array to be printed
 * Return: nothing
 */
void print_chessboard(char (*a)[8])
{
	int row = 0;
	int col;

	while (row < 8)
	{
		col = 0;
		while (col < 8)
		{
			if (col == 7)
			{
				_putchar(a[row][col]);
				_putchar('\n');
			}
			else
				_putchar(a[row][col]);
			col++;
		}
		row++;
	}
