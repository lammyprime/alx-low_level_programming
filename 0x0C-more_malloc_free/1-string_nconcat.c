#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - function
 * @s1: string 1
 * @s2: string 2
 * @n: n
 * Return: value
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *s;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
if (strlen(s2) >= n)
s = malloc(sizeof(char) * (strlen(s1) + n + 1));
if (s == NULL)
return (NULL);
strcpy(s, s1);
strncat(s, s2, n);
return (s);
}
