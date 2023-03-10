#include <stdio.h>
#include "main.h"
/**
*_puts - function
* @str: first operand and pointer
*
* Description: prints a string, followed by a new line to stdout
* Return: string
*/
void _puts(char *str)
{
int i = 0;
while (str[i])
{
putchar(str[i]);
i++;
}
putchar('\n');
}
