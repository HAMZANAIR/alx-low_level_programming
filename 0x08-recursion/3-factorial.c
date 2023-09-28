#include "main.h"

/**
* factorial - returns the factorial of a number
* @n: the number for which to calculate the factorial
*
* Return: the factorial of n, or -1 if n is negative
*/
int factorial(int n)
{
if (n < 0)
return (-1);

if (n == 0)
return (1);
else
return (n * factorial(n - 1));
}

