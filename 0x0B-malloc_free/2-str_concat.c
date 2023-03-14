#include <stdlib.h>
#include <stdio.h>
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
 * str_concat - concatenates two strings
 * @s1: pointer to string one
 * @s2: pointer to string two
 * Return: pointer to newly created string
 */
char *str_concat(char *s1, char *s2)
{
	char *new;
	unsigned int size1, size2, idx1, idx2;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	size1 = _strlen(s1);
	size2 = _strlen(s2);

	new = malloc(sizeof(*s1) * (size1 + size2 + 1));

	if (new == NULL)
		return (NULL);

	idx1 = 0;
	while (idx1 < size1)
	{
		new[idx1] = s1[idx1];
		idx1++;
	}

	idx2 = 0;
	while (idx2 <= size2)
	{
		new[idx1] = s2[idx2];
		idx1++;
		idx2++;
	}
	return (new);
}
