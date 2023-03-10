#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: a pointer to the string in question
 * Return: length of string as int
 */
int _strlen_recursion(char *s)
{
	/* early return example from Jon */
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
