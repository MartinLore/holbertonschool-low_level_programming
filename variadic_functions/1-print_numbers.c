#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)

{
    va_list valist;
    unsigned int i;

    va_start(valist, n);

    for (i = 0; i < n; i++)
    {
        if (separator != NULL && i != (n - 1))
            printf("%d%s", va_arg(valist, int), separator);
        else
            printf("%d", va_arg(valist, int));
    }
    printf("\n");
    va_end(valist);
}