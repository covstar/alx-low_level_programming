#include "main.h"
#include <stdio.h>
/**
* rev_string - function
* @s: first operand and array size
*
* Description: function to reverses a string
* Return: string
*/
void rev_string(char *s)
{
	int i = 0;
	int r = 0;

	while (s[i])
	{
		i++;
	}

	while (--i > r)
	{
		char front = s[r];
		char back = s[i];

		s[r] = back;
		r++;
		s[i] = front;
	}
}
