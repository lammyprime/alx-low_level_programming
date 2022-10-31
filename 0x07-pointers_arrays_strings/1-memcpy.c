#include "main.h"

/**
 * _memcpy - function
 * @dest: destination
 * @src: source
 * @n: number of bytes
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
int i;
char *newsrc = (char *)src;
char *newdest = (char *)dest;
for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
