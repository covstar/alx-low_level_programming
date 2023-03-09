#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: a pointer to the string to be reversed
 * Return: nothing
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		s++;
		_print_rev_recursion(s);
		_putchar(*(s - 1));
	}
}
