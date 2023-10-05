#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* _strdup - Duplicates a string.
* @str: The string to duplicate.
*
* Return: A pointer to the newly allocated duplicate string,
*         or NULL if str is NULL or if memory allocation fails.
*/
char *_strdup(char *str)
{
char *duplicate;
int length, i;

if (str == NULL)
return (NULL);

length = 0;
while (str[length] != '\0')
length++;

duplicate = malloc((length + 1) * sizeof(char));

if (duplicate == NULL)
return (NULL);

for (i = 0; i <= length; i++)
duplicate[i] = str[i];

return (duplicate);
}
