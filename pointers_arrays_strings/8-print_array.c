#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n elements of an array of integers
 * @a: array of integers
 * @n: number of elements to be printed
 *
 * Return: void
 */

void print_array(int *a, int n)
{
    int i = 0;

    while (i < n)
    {
        if (i != n - 1)
            printf("%d, ", *(a + i));
        else
            printf("%d", *(a + i));
        i++;
    }
    printf("\n");
}