#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - This C program generates a random number and determines the last digit, then prints a message based
 * on the value of the last digit.
 * 
 * Return: The main function is returning 0.
 */
int main(void)
{
	int n, , lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
    lastDigit = n % 10;
    if (lastDigit > 5)
    {
        printf("Last digit of %d is %d and is greater than 5\n", n, lastDigit);
    }
    else if (lastDigit == 0)
    {
        printf("Last digit of %d is %d and is 0\n", n, lastDigit);
    }
    else if (lastDigit < 6 && lastDigit != 0)
    {
        printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastDigit);
    }
	return (0);
}