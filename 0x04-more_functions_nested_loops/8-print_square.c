#include "main.h"

/**
 * print_square - check the code
 * @size: size of square
 * Return: Always 0.
 */
void print_square(int size)
{
  int a, y;
if (size <= 0)
{
_putchar('\n');
}
else
{
for (a = 0; a <= size; a++)
{
for (y = 0; y < size; y++)
{
_putchar(35);
}
_putchar('\n');
}
}
}
