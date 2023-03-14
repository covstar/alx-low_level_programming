#include <stdlib.h>

/**
 * _strlen - finds the length of a string
 * @s: a pointer to the string
 * Return: 0 if the string is empty or the length of the string
 */
int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen(s + 1));
}

/**
 * _strcpy - copies src onto the end of dest, overwriting the null byte
 * in dest and adding a new one after copy completion
 * @dest: the string to be amended
 * @src: the source string to be copied
 * Return: a pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int idx1, idx2;

	idx1 = _strlen(dest);

	idx2 = 0;
	while (src[idx2] != '\0')
	{
		dest[idx1] = src[idx2];
		idx1++;
		idx2++;
	}
	dest[idx1] = '\n';
	idx1++;
	dest = dest + idx1;
	return (dest);
}

/**
 * argstostr - concatenates all the arguments of this program into a new string
 * @ac: the number of arguments
 * @av: a pointer to the array of strings
 * Return: a pointer to the new string
 */

char *argstostr(int ac, char **av)
{
	char *args;
	char *hold;
	int idx, idx2, length;

	if (ac == 0 || av == NULL)
		return (NULL);

	idx = 0;
	length = 0;
	while (idx < ac)
	{
		length = length + _strlen(av[idx]);
		idx++;
	}
	length = length + ac + 1;
	args = malloc(sizeof(char) * length);

	if (args == NULL)
	{
		free(args);
		return (NULL);
	}

	hold = args;
	idx2 = 0;
	while (idx2 < ac)
	{
		args = _strcpy(args, av[idx2]);
		idx2++;
	}
	*args = '\0';
	args = hold;
	return (args);
}
