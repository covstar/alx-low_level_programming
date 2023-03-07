#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print sum of two diagonals in a square matrix of ints
 * @a: pointer to 2d array
 * @size: the number of columns in each row of the array
 * Return: nothing
 */
void print_diagsums(int *a, int size)
{
	int sum;
	int *b = a;
	int count = 1;

	sum = *b;

	while (count < size)
	{
		sum = sum + *(b + size + 1);
		b = b + size + 1;
		count++;
	}
	printf("%d, ", sum);

	sum = *(a + size - 1);
	count = 1;
	while (count < size)
	{
		a = a + size - 1;
		sum = sum + *(a + size - 1);
		count++;
	}
	printf("%d\n", sum);
}
