#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - function
 * @b: integer
 * Return: value
 */
void *malloc_checked(unsigned int b)
{
int *i;
i = malloc(b);
if (i == NULL)
{
exit(98);
}
return (i);
}
