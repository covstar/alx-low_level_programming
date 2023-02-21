#include <stdio.h>
/**
* print_sign - function to print sign of a number
* @n: First parameter
*
* Description: printing positive, negative, or zero
* Return: 1 and prints + if n > 0, ret 0/print0 if n = 0, ret -1/prnt- in n < 0
*/
int print_sign(int n)

    {
	if (n > 0)
	{
		printf('+');
		return (1);
	}
	
	else if (n == 0)
     {

		printf('0');
		return (0);
     }
	else if (n < 0)
     {

		printf('-');
		return (-1);
     }
else
{
printf('-');
return ('/');
}
}int print_sign(int n) {
    if (n > 0) {
        printf("+");
        return 1;
    } else if (n < 0) {
        printf("-");
        return -1;
    } else {
        printf("0");
        return 0;
    }
}
