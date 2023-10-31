#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of pointers to the strings (arguments)
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])

{
    int i, j, k;

    if (argc != 3)
    {
        printf("Error\n");
        return (1);
    }
    else
    {
        i = atoi(argv[1]);
        j = atoi(argv[2]);
        k = i * j;
        printf("%d\n", k);
        return (0);
    }
}