#include "function_pointers.h"

/**
 * int_index - searches for an integer in an array
 * @array: the array to be searched
 * @size: the size of the array
 * @cmp: ptr to the function to be used
 * Return: index position that an int is found in array, or -1 if
 * not found, or -1 if size is less than or equal to 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || cmp == NULL || array == NULL)
		return (-1);

	i = 0;
	while (i < size)
	{
		if (!(cmp(array[i])))
			i++;

		else
			return (i);
	}

	return (-1);
}
