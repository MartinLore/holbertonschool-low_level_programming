#include "main.h"
#include <stdio.h>

/**
 * main - prints its name, followed by a new line
 * @argc: number of arguments
 * @argv: array of pointers to the strings (arguments)
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])

{
    printf("%s\n", argv[0]);
    (void)argc;
    return (0);
}