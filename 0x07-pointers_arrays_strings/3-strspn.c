#include "main.h"

/**
* _strspn - gets the length of a prefix substring
* @s: the string to search
* @accept: the characters to search for
*
* Return: the number of bytes in the initial segment of s which consist
* only of bytes from accept
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int count = 0;
int found;
int i;
while (*s)
{
found = 0;
for (i = 0; accept[i]; i++)
{
if (*s == accept[i])
{
count++;
found = 1;
break;
}
}

if (!found)
return (count);

s++;
}

return (count);
}

