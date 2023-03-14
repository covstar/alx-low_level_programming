#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2d array of integers
 * @width: number of columns in array
 * @height: number of rows in array
 *
 * Return: ptr to 2d array if successful, or NULL if not
 */
int **alloc_grid(int width, int height)
{
	int **array, w, h;

	if (width <= 0 || height <= 0)
		return (NULL);

	array = malloc(sizeof(int *) * height);

	if (array == NULL)
	{
		free(array);
		return (NULL);
	}

	h = 0;
	while (h < height)
	{
		array[h] = malloc(sizeof(int) * width);
		if (array[h] == NULL)
		{
			h = 0;
			while (h < height)
			{
				free(array[h]);
				h++;
			}
			free(array);
			return (NULL);
		}

		w = 0;
		while (w < width)
		{
			*(array[h] + w) = 0;
			w++;
		}
		h++;
	}
	return (array);
}
