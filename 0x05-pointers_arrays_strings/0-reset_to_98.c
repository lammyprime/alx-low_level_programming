#include "main.h"

/**
 * reset_to_98 - resetting value
 * @n: parameter to be updated
 * Return: ....
 */
void reset_to_98(int *n)
{
int *p;
p = &n;
reset_to_98(p);
_putchar(n);
}
