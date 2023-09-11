#include <stdio.h>
/**
 * main - Entry point of the program.
 *
 * Return: Always 0 (success).
 */
int main(void)
{
int i;
int j;
int k;
int a;
for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
for (k = i; k <= 9; k++)
{
for (a = j + 1; a <= 9 ; a++)
{
putchar(i + '0');
putchar(j + '0');
putchar(' ');
putchar(k + '0');
putchar(a + '0');
if (i !=  9 ||  j != 8)
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');

return (0);
}
