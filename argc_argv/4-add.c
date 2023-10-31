#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - adds positive numbers
 * @argc: number of arguments
 * @argv: array of pointers to the strings (arguments)
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])

{
    int i, j, k;

    if (argc < 2)
    {
        printf("0\n");
        return (0);
    }
    else
    {
        k = 0;
        for (i = 1; i < argc; i++)
        {
            for (j = 0; j < strlen(argv[i]); j++)
            {
                if (argv[i][j] < '0' || argv[i][j] > '9')
                {
                    printf("Error\n");
                    return (1);
                }
            }
            k += atoi(argv[i]);
        }
        printf("%d\n", k);
        return (0);
    }
}