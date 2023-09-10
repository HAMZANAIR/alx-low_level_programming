#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * getLastDigit - Retrieves the last digit of a number.
 * @number: The number from which to retrieve the last digit.
 *
 * Return: The last digit of the number.
 */
int getLastDigit(int number)
{
return (number % 10);
}
/**
 * main - Entry point of the program.
 *
 * Return: Always 0 (success).
 */
int main(void)
{
int n;
int lastDigit;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes here */
lastDigit = getLastDigit(n);
printf("Last digit of %d is %d ", n, lastDigit);
if (lastDigit > 5)
{
printf("and is greater than 5\n");
}
else if (lastDigit < 6 && lastDigit != 0)
{
printf("and is less than 6 and not 0\n");
}
else
{
printf("and is 0\n");
}

return (0);
}
