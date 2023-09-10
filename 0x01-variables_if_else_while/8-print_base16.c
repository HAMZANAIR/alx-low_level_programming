#include <stdio.h>
/**
 * main - Entry point of the program.
 *
 * Return: Always 0 (success).
 */
int main(void)
{
int i;
for (i = 0; i <= 15; i++)
{
if (i > 9)
{
putchar(i + 'a' - 10);
}
else
{
putchar(i + '0');
}
}
putchar('\n');

return (0);
}
