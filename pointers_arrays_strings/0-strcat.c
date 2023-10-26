#include "main.h"
#include <stdio.h>

/**
 * _strcat - concatenates two strings
 * @dest: string to be appended to
 * @src: string to append
 *
 * Return: pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
    int i, j;

    i = 0;
    while (*(dest + i))
        i++;
    for (j = 0; *(src + j); j++)
        *(dest + i + j) = *(src + j);
    *(dest + i + j) = '\0';

    return (dest);
}