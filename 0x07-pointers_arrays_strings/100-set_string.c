#include "main.h"

/**
 * set_string - sets value of a pointer to a char
 * @s: a pointer to a pointer to be changed
 * @to: a pointer to the desired string
 * Return: nothing
 */
void set_string(char **s, char *to)
{
	*s = to;
}
