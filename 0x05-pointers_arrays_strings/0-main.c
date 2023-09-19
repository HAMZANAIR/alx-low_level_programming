#include "main.h"
#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * This function serves as the entry point of the program. It initializes
 * variables, calls other functions, and controls the flow of execution.
 *
 * Return: 0 on success, non-zero on failure.
 */
int main(void)
{
int n;

n = 402;
printf("n=%d\n", n);
reset_to_98(&n);
printf("n=%d\n", n);
return (0);
}
