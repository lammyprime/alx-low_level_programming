#include "function_pointers.h"
/**
 * int_index - function
 * @size: number of elements
 * @array: array
 * @cmp: pointer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int index;

if (array == NULL || cmp == NULL)
return (-1);
for (index = 0; index < size; index++)
{
if (cmp(array[index]) != 0)
return (index);
}
return (-1);
}
