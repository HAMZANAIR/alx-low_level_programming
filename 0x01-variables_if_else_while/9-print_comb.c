#include <stdio.h>
/**
 * main - Entry point of the program.
 *
 * Return: Always 0 (success).
 */
int main(void)
{
int i;
for (i = 0; i < 9; i++)
{
putchar(i + '0');
putchar(',');
putchar(' ');
}
putchar('9');
putchar('\n');

return (0);
}
