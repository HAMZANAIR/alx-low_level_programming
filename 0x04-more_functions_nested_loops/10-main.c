#include "main.h"
/**
 * main - Entry point of the Triangle Printing program
 *
 * This program demonstrates
 * the printing of triangles of varying sizes. It calls
 * the `print_triangle` function to print triangles with the specified sizes.
 * The triangles are printed using the '#' character, and they are separated by
 * spaces for proper alignment.
 * The program prints multiple triangles for different
 * sizes, including an empty line for a size of 0 or less.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
print_triangle(2);
print_triangle(10);
print_triangle(1);
print_triangle(0);
return (0);
}
