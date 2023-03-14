#include <stdlib.h>
#include <string.h>
/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */

char *str_concat(char *s1, char *s2) {
    char *result;
    unsigned int s1_length, s2_length;

    if (s1 == NULL) {
        s1 = "";
    }

    if (s2 == NULL) {
        s2 = "";
    }

    s1_length = strlen(s1);
    s2_length = strlen(s2);

    result = (char *)malloc(s1_length + s2_length + 1);

    if (result == NULL) {
        return NULL;
    }

    strcpy(result, s1);
    strcat(result, s2);

    return result;
}
