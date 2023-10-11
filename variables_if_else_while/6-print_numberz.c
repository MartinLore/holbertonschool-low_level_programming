/**
 * main - The function prints the numbers 0 to 9 on the console.
 * 
 * Return: The main function is returning 0.
 */
#include <stdio.h>

int main(void)
{
    int i;

    for (i = 0; i < 10; i++)
    {
        putchar(i + '0');
    }
    putchar('\n');

    return (0);
}
