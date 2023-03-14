#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/**
 * print_tab - Prints an array of string
 * @tab: The array to print
 *
 * Return: nothing
 */
int count_words(char *);
char **allocate_memory(int, char *);
void free_memory(char **, int);

char **strtow(char *str) {
    int i, j, k;
    int words, len;
    char **word_array;

    if (str == NULL || *str == '\0') {
        return NULL;
    }

    words = count_words(str);
    word_array = allocate_memory(words, str);

    if (word_array == NULL) {
        return NULL;
    }

    i = 0;
    k = 0;

    while (str[i]) {
        while (isspace(str[i])) {
            i++;
        }

        if (str[i] == '\0') {
            break;
        }

        len = 0;

        while (str[i + len] && !isspace(str[i + len])) {
            len++;
        }

        word_array[k] = (char *) malloc(sizeof(char) * (len + 1));

        if (word_array[k] == NULL) {
            free_memory(word_array, k);
            return NULL;
        }

        for (j = 0; j < len; j++) {
            word_array[k][j] = str[i + j];
        }

        word_array[k][j] = '\0';
        k++;
        i += len;
    }

    word_array[k] = NULL;

    return word_array;
}

int count_words(char *str) {
    int i, count;

    count = 0;

    for (i = 0; str[i]; i++) {
        if (!isspace(str[i]) && (isspace(str[i + 1]) || str[i + 1] == '\0')) {
            count++;
        }
    }

    return count;
}

char **allocate_memory(int words, char *str) {
    char **word_array;

    word_array = (char **) malloc(sizeof(char *) * (words + 1));

    if (word_array == NULL) {
        return NULL;
    }

    if (words == 1 && !isspace(*str)) {
        word_array[0] = (char *) malloc(sizeof(char) * (strlen(str) + 1));
    }

    return word_array;
}

void free_memory(char **word_array, int words) {
    int i;

    for (i = 0; i < words; i++) {
        free(word_array[i]);
    }

    free(word_array);
}
