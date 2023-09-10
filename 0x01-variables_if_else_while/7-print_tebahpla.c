#include <stdio.h>
#include <string.h>
/**
 * main - Entry point of the program.
 *
 * Return: Always 0 (success).
 */
int main(void)
{
char alpha[] = "abcdefghijklmnopqrstuvwxyz";
size_t length = strlen(alpha);
unsigned long int i;
for (i = length; i > 0; i--)
{
putchar(alpha[i - 1]);
}
putchar('\n');

return (0);
}
