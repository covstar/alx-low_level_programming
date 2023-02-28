#include "main.h"
#include <stdio.h>
/**
* puts2 - function
* @str: string operand
*
* Description: print every other char of a string starting with 1stw/ \n
* Return: string
*/
void puts2(char *str)
{
	int counter = 0;
	int i = 0;

	while (str[i])
	{
		counter++;
		i++;
	}
	for (i = 0; i < counter; i++)
	{
		if (i % 2 == 0)
		{
		_putchar(str[i]);
		}
	}
	_putchar(10);
}
