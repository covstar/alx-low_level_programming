#include <stdlib.h>
/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
char *argstostr(int ac, char **av) {
    int i, j;
    int len = 0, index = 0;
    char *str;

    if (ac == 0 || av == NULL) {
        return NULL;
    }

    for (i = 0; i < ac; i++) {
        for (j = 0; av[i][j]; j++) {
            len++;
        }
        len++;
    }

    str = (char *)malloc((len + 1) * sizeof(char));
    if (str == NULL) {
        return NULL;
    }

    for (i = 0; i < ac; i++) {
        for (j = 0; av[i][j]; j++) {
            str[index] = av[i][j];
            index++;
        }
        str[index] = '\n';
        index++;
    }
    str[index] = '\0';

    return str;
}
