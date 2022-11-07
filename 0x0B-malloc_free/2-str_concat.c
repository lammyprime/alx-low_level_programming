#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - function
 * @s1: string 1
 * @s2: string 2
 * Return: value
 */
char *str_concat(char *s1, char *s2)
{
char *str;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
str = malloc(sizeof(char) * (strlen(s1) + strlen(s2) + 1));
if (str == NULL)
return (NULL);
strcpy(str, s1);
strcat(str, s2);
return (str);
}
