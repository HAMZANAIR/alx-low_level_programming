#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* str_concat - Concatenates two strings.
* @s1: The first string.
* @s2: The second string.
*
* Return: A pointer to a newly allocated space in memory
*         containing the concatenated string, or NULL on failure.
*/
char *str_concat(char *s1, char *s2)
{
int length1 = 0, length2 = 0, i, j;
char *con;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

while (s1[length1] != '\0')
length1++;
while (s2[length2] != '\0')
length2++;

con = malloc(sizeof(char) * (length1 + length2 + 1));

if (con == NULL)
return (NULL);

for (i = 0; i < length1; i++)
{
con[i] = s1[i];
}

for (j = 0; j < length2; j++)
{
con[length1 + j] = s2[j];
}

con[length1 + length2] = '\0';

return (con);
}

