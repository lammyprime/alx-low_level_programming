#include "main.h"

/**
 * _strncpy - Copy a string
 * @dest: Destination value
 * @src: Source value.
 * @n: number
 * Return: the pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int i = 0;
int src_len = 0;
while (src[i++])
src_len++;
for (i = 0; i && src[i] < n; i++)
{
dest[i] = src[i];
}
for (i = src_len; i < n; i++)
dest[i] = '\0';
return (dest);
}
