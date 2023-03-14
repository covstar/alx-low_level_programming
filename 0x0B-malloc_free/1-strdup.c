#include <stdlib.h>
#include <string.h>
/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */

char *_strdup(char *str) {
    char *duplicate;
    unsigned int length;

    if (str == NULL) {
        return NULL;
    }

    length = strlen(str);
    duplicate = (char *)malloc(length + 1);

    if (duplicate == NULL) {
        return NULL;
    }

    strcpy(duplicate, str);
    return duplicate;
}
