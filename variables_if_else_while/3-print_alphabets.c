/**
 * main - The above function prints all lowercase and uppercase letters of the English alphabet.
 * 
 * Return: The main function is returning 0.
 */
#include <stdio.h>

int main(void)
{
    char lowercase, uppercase;

    for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
    {
        putchar(lowercase);
    }

    for (uppercase = 'A'; uppercase <= 'Z'; uppercase++)
    {
        putchar(uppercase);
    }

    putchar('\n');

    return (0);
}
