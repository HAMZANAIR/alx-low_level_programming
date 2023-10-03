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
char *dep;
int length;
int i;
length = 0;
for (i = 0; str[i] != '\0'; i++)
{
length++;
}
dep = malloc(sizeof(char) * length);
if (length == 0)
{
return (NULL);
}
else if (dep == NULL)
{
return (NULL);
}
for (i = 0; i < length; i++)
{
dep[i] = str[i];
}
dep[length] = '\0';
return (dep);
}

