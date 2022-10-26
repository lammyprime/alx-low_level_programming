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
int destlen;
while (dest[destlen])
destlen++;
for (i = 0; src[i] != '\0'; i++)
{
dest[destlen++] = src[i++];
}
dest[destlen++] = '\0';
return (dest);
}
