#include <stdlib.h>
#include "main.h"

/**
 * _strchr - function
 * @s: string
 * @c: character
 * Return: position
 */

char *_strchr(char *s, char c)
{
char *position = NULL;
int i;
for (i = 0; s[i] != '\0'; i++)
{
if (s[i] == c)
{
position = &s[i];
break;
}
}
return (position);
}
