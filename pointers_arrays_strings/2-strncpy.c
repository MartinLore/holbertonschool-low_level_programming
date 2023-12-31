#include "main.h"
#include <stdio.h>

/**
 * _strncpy - copies a string
 * @dest: string to copy to
 * @src: string to copy
 * @n: number of bytes to copy
 *
 * Return: pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
    int i;

    for (i = 0; i < n && *(src + i); i++)
        *(dest + i) = *(src + i);
    for ( ; i < n; i++)
        *(dest + i) = '\0';

    return (dest);
}