#include "main.h"

/**
* leet - encodes a string into 1337
* @str: the string to be encoded
*
* Return: a pointer to the encoded string
*/
char *leet(char *str)
{
char *leet_chars = "aAeEoOtTlL";
char *leet_replacements = "4433007711";
int i;
int j;
for (i = 0; str[i]; i++)
{
for (j = 0; leet_chars[j]; j++)
{
if (str[i] == leet_chars[j])
{
str[i] = leet_replacements[j];
break;
}
}
}

return (str);
}

