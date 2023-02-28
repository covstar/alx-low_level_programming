#include "main.h"
/**
* puts2 - function
* @str: string operand
*
* Description: print every other char of a string starting with 1stw/ \n
* Return: string
*/
void puts2(char *str)
{
	int longi = 0;
	int i = 0;
	char *y = str;
	int o;

	while (*y != '\0')
	{
		longi++;
		y++;
	}
	i = longi - 1;
	for (o = 0; o < i; o++)
	{
		if (o % 2 == 0)
	{
		_putchar(str[o]);
	}
	}
	_putchar('\n');
}
