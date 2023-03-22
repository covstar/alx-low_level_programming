#include "3-calc.h"

/**
 * main - prints the result of the arithmetic equation entered by user
 * @argc: the number of arguments entered
 * @argv: a vector of the arguments as strings
 * Return: 0 for success
 */
int main(int argc, char *argv[])
{
	int num1, num2;
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (strlen(argv[2]) != 1)
	{
		printf("Error\n");
		exit(99);
	}

	f = get_op_func(argv[2]);

	if (f == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	printf("%d\n", f(num1, num2));

	return (0);
}
