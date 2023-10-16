#include "main.h"

/**
 * print_square - Prints a square using the character #.
 * @size: The size of the square to be printed.
 */
void print_square(int size)
{
    int len, wid;

    if (size > 0)
    {
        for (len = 0; len < size; len++)
        {
            for (wid = 0; wid < size; wid++)
                _putchar('#');

            if (len == size - 1)
                continue;
            _putchar('\n');
        }
    }

    _putchar('\n');
}