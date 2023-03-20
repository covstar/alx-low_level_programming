#include <stdio.h>

#define __file__

/**
 * main - uses printf to print name of file it was compiled from
 *
 * Return: 0 for success
 */
int main(void)
{
	printf("%s\n", __FILE__);

	return (0);
}
