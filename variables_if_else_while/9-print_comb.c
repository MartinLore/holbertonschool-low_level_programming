#include <stdio.h>
/**
 * main - The function prints the numbers 0 to 9 separated by commas and spaces.
 * 
 * Return: The main function is returning 0.
 */
int main(void)
{
    int i;

    for (i = 0; i < 10; i++)
    {
        putchar(i + '0');
        if (i != 9)
        {
            putchar(',');
            putchar(' ');
        }
    }
    putchar('\n');

    return (0);
}
