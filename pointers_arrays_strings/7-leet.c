#include "main.h"
#include <stdio.h>

/**
 * leet - encodes a string into 1337
 * @s: string to be encoded
 *
 * Return: pointer to encoded string
 */

char *leet(char *s)

{
    int i = 0, j;
    char *low = "aeotl";
    char *up = "AEOTL";
    char *num = "43071";

    while (s[i] != '\0')
    {
        for (j = 0; j < 5; j++)
        {
            if (s[i] == low[j] || s[i] == up[j])
                s[i] = num[j];
        }
        i++;
    }
    return (s);
}