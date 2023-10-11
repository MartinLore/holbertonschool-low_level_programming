/**
 * main - The function prints the lowercase alphabet in reverse order.
 * 
 * Return: The main function is returning an integer value of 0.
 */
#include <stdio.h>

int main(void)
{
    char letter;

    for (letter = 'z'; letter >= 'a'; letter--)
    {
        putchar(letter);
    }
    putchar('\n');

    return 0;
}
