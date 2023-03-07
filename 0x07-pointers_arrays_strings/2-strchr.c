#include "main.h"
#include <stdio.h>

/**
 * char *_strchr(char *s, char c) locates a character in a string.
 *Returns a pointer to the first occurrence of the character c in the string 
 *or NULL if the character is not found
 *
 * Return: Always 0.
 */
char *_strchr(char *s, char c)
{
int a;
while (1)
{
if (a == c)
{
return (s - 1);
}
if (a == 0)
{
return (NULL);
}
}
}
