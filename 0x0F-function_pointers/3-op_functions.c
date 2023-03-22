#include "3-calc.h"

/**
 * op_add - returns the sum of a and b
 * @a: first int in sum
 * @b: second int in sum
 * Return: sum of a and b as int
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns the difference of a and b
 * @a: first int
 * @b: second int
 * Return: difference of a and b as int
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns the product of a and b
 * @a: first int in product
 * @b: second int in product
 * Return: product of a and b as int
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - returns the result of division of a by  b
 * @a: int to be divided
 * @b: int to divide a by
 * Return: result of a divided by b as int
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
 * op_mod - returns remainder of division of a and b
 * @a: int to be divided
 * @b: int to divide a by
 * Return: remainder of result of a divided b as int
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
