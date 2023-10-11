#include <stdio.h>
/**
 * main - The function prints all lowercase letters from 'a' to 'z', excluding the letters 'q' and 'e'.
 * 
 * Return: The main function is returning an integer value of 0.
 */
int main(void)
{
    char letter;

    for (letter = 'a'; letter <= 'z'; letter++)
    {
        if (letter != 'q' && letter != 'e')
            putchar(letter);
    }
    putchar('\n');

    return (0);
}
