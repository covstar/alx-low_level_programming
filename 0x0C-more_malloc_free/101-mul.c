#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

void print_error(void)
{
    printf("Error\n");
    exit(98);
}

void check_digits(char *num)
{
    for (int i = 0; i < strlen(num); i++)
    {
        if (!isdigit(num[i]))
        {
            print_error();
        }
    }
}

int multiply(char *num1, char *num2, char *result)
{
    int len1 = strlen(num1);
    int len2 = strlen(num2);

    int *res = calloc(len1 + len2, sizeof(int));

    for (int i = len1 - 1; i >= 0; i--)
    {
        for (int j = len2 - 1; j >= 0; j--)
        {
            int x = (num1[i] - '0') * (num2[j] - '0');
            int p1 = i + j, p2 = i + j + 1;
            int sum = x + res[p2];

            res[p1] += sum / 10;
            res[p2] = sum % 10;
        }
    }

    int i = 0;
    while (i < len1 + len2 && res[i] == 0)
    {
        i++;
    }

    if (i == len1 + len2)
    {
        result[0] = '0';
        result[1] = '\0';
    }
    else
    {
        int j = 0;
        while (i < len1 + len2)
        {
            result[j] = res[i] + '0';
            i++;
            j++;
        }
        result[j] = '\0';
    }

    free(res);
    return (0);
}

int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        print_error();
    }

    check_digits(argv[1]);
    check_digits(argv[2]);

    char *result = malloc(strlen(argv[1]) + strlen(argv[2]) + 1);

    multiply(argv[1], argv[2], result);

    printf("%s\n", result);

    free(result);
    return (0);
}
