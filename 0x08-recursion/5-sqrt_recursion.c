#include "main.h"

/**
* calculate_sqrt - helper function to calculate the square root recursively
* @n: the number for which to calculate the square root
* @guess: the current guess for the square root
*
* Return: the natural square root of n, or -1 if n does not have one
*/
int calculate_sqrt(int n, int guess)
{
if (guess * guess == n)
return (guess);

if (guess * guess > n)
return (-1);

return (calculate_sqrt(n, guess + 1));
}

/**
* _sqrt_recursion - returns the natural square root of a number
* @n: the number for which to calculate the square root
*
* Return: the natural square root of n, or -1 if n does not have one
*/
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);

return (calculate_sqrt(n, 0));
}
