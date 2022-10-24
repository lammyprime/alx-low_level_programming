#include "main.h"


/**
 * swap_int - a function that swaps two ints
 * @a: An integer input pointer
 * @b: an integer
 * Return: Nothing.
 */
void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
