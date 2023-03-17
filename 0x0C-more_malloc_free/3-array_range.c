#include <stdlib.h>

/**
 * array_range - create an ordered array of integers from min to max
 * @min: lowest int
 * @max: highest int
 * Return: pointer to new array or NULL
 */
int *array_range(int min, int max)
{
	int *arr, length, i;

	if (min > max || (min == 0 && max == 0))
		return (NULL);

	length = max - (min - 1);

	arr = malloc(sizeof(*arr) * length);
	if (arr == NULL)
		return (NULL);

	i = 0;
	while (i < length)
	{
		arr[i] = min;
		min++;
		i++;
	}
	return (arr);
}
