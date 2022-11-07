#include "main.h"
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
newstr = malloc(sizeof(str));
if (newstr == NULL)
return (NULL);
strcpy(newstr, str);
return (newstr);
}
