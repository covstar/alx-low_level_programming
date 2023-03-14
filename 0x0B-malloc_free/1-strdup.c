#include <stdlib.h>
/**
 * _strlen - length a string
 * @s: string in questions
 * Return: string length as an int
 */
int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen(s + 1));
}

/**
 * _strdup - returns a pointer to a space in memory containing copy of a string
 * @str: the string to be copied
 *
 * Return: pointer to the memory allocation
 */
char *_strdup(char *str)
{
	char *s;
	unsigned int size;
	unsigned int idx;

	if (str == NULL)
		return (NULL);

	size = _strlen(str) + 1;

	s = malloc(sizeof(char) * size);

	if (s == NULL)
		return (NULL);

	idx = 0;
	while (idx < size)
	{
		s[idx] = str[idx];
		idx++;
	}

	return (s);
}
