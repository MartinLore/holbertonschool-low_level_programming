#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: string to copy
 *
 * Return: pointer to new string, or NULL if str = NULL or if memory
 * allocation fails
 */

char *_strdup(char *str)

{
    char *array;
    int i, j;

    if (str == NULL)
        return (NULL);

    for (i = 0; str[i] != '\0'; i++)
        ;

    array = malloc(sizeof(char) * i + 1);

    if (array == NULL)
        return (NULL);

    for (j = 0; j < i; j++)
        array[j] = str[j];

    array[j] = '\0';

    return (array);
}