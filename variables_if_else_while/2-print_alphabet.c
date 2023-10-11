/**
 * main - This C program prints all lowercase letters from 'a' to 'z'.
 * 
 * Return: The main function is returning an integer value of 0.
 */
#include <stdio.h>

int main(void)
{
    char letter = 'a';

    while (letter <= 'z')
    {
        putchar(letter);
        letter++;
    }

    putchar('\n');

    return 0;
}
