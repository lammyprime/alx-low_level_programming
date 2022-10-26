#include "main.h"

/**
 * _strcat - Copy a string
 * @dest: Destination value
 * @src: Source value.
 *
 * Return: the pointer to dest
 */
char *_strcat(char *dest, char *src)
{
int i;
for (i = 0; src[i] != '\0'; i++)
{
dest[i] = src[i++];
}
dest[i++] = '\0';
return (dest);
}
