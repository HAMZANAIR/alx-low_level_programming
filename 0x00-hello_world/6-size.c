#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * This function prints the message "Programming is like building
 * a multilingual puzzle" followed by a new line and returns 0.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
printf("Size of a char: %lu byte(s)\n", sizeof(char));
printf("Size of an int: %lu byte(s)\n", sizeof(int));
printf("Size of a long int: %lu byte(s)\n", sizeof(long int));
printf("Size of a long long int: %lu byte(s)\n", sizeof(long long int));
printf("Size of a float: %lu byte(s)\n", sizeof(float));
printf("Size of a double: %lu byte(s)\n", sizeof(double));
return (0);
}