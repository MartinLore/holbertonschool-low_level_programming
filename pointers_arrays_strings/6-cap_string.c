#include "main.h"
#include <stdio.h>

/**
 * cap_string - capitalizes all words of a string
 * @s: string to be capitalized
 *
 * Return: pointer to capitalized string
 */

char *cap_string(char *s)

{
    int i = 0;

    while (s[i] != '\0')
    {
        if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' || s[i] == ','
            || s[i] == ';' || s[i] == '.' || s[i] == '!' || s[i] == '?'
            || s[i] == '"' || s[i] == '(' || s[i] == ')' || s[i] == '{'
            || s[i] == '}')
        {
            if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
                s[i + 1] -= 32;
        }
        i++;
    }
    return (s);
}