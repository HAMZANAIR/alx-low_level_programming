#include "main.h"
/**
* _strlen - Returns the length of a string.
* @s: Pointer to the string.
* Return: The length of the string (an integer).
*/
int _strlen(char *s)
{
int length = 0;

while (*s != '\0')
{
length++;
s++;
}

return (length);
}
