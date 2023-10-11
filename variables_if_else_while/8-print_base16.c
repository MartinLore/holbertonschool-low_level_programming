#include <stdio.h>
/**
 * main - The function prints the characters '0' to '9' and 'a' to 'f' followed by a newline character.
 * 
 * Return: The main function is returning 0.
 */
int main(void)
{
    char c;

    for (c = '0'; c <= '9'; c++)
        putchar(c);
    for (c = 'a'; c <= 'f'; c++)
        putchar(c);
    putchar('\n');

    return (0);
}
