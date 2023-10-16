#include "main.h"

/**
 * print_triangle - Prints a triangle, using the character #.
 * @size: The size of the triangle.
 */
void print_triangle(int size)
{
    int len, wid;

    if (size > 0)
    {
        for (len = 0; len < size; len++)
        {
            for (wid = 0; wid < size; wid++)
            {
                if (wid < size - len - 1)
                    _putchar(' ');
                else
                    _putchar('#');
            }

            if (len == size - 1)
                continue;
            _putchar('\n');
        }
    }

    _putchar('\n');
}