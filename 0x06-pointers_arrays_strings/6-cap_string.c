#include "main.h"
#include <stdbool.h>

/**
* is_separator - Checks if a character is a word separator.
* @c: The character to check.
*
* Return: true if the character is a separator, false otherwise.
*/
bool is_separator(char c)
{
char separators[] = " \t\n,;.!?\"(){}";
int i;
for (i = 0; separators[i]; i++)
{
if (c == separators[i])
return (true);
}

return (false);
}

/**
* cap_string - Capitalizes all words in a string.
* @str: The input string.
*
* Return: A pointer to the modified string.
*/
char *cap_string(char *str)
{
char *ptr = str;
bool new_word = true;

while (*ptr != '\0')
{
if (new_word && (*ptr >= 'a' && *ptr <= 'z'))
{
*ptr = *ptr - ('a' - 'A');
new_word = false;
}
else if (is_separator(*ptr))
{
new_word = true;
}

ptr++;
}

return (str);
}

