#include "main.h"

/**
 * print_last_digit - Computes the absolute value of an integer.
 * @n: The number to be computed.
 *
 * Return: Absolute value of number or zero
 */
int print_last_digit(int n)
{
int last;
last = n % 10;
if (last < 0)
{
last = last * -1;
}
_putchar(last + '0');
return (last);
}
