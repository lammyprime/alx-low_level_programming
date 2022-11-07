0#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * _strdup - function to duplicate strings
 * @str: str to be duplicated
 * Return: duplicatedstring
 */
char *_strdup(char *str)
{
char *newstr;
if (str == NULL)
return (NULL);
newstr = malloc(sizeof(char) * strlen(str) + 1);
if (newstr == NULL)
return (NULL);
strcpy(newstr, str);
return (newstr);
}
