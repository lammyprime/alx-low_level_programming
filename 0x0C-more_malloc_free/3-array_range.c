#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: function parameter
 * @max: func para
 * Return: NULL or pointer
 */

int *array_range(int min, int max)
{
int *i;
int n;
int y = max - min + 1;
if (min > max)
return (NULL);
i = malloc(sizeof(int) * (y + 1));
if (i == NULL)
return (NULL);
for (n = 0; n <= y; n++)
{
i[n] = min;
min++;
}
return (i);
}

