#include <stdio.h>
#include <string.h>
/**
 * main - Entry point of the program.
 *
 * Return: Always 0 (success).
 */
int main(void)
{
char alpha[] = "abcdfghijklmnoprstuvwxyz";
size_t length = strlen(alpha);
unsigned long int i;
for (i = 0; i < length; i++)
{
putchar(alpha[i]);
}
putchar('\n');

return (0);
}
