#include "main.h"

/**
 * print_most_numbers - check the code
 *
 * Return: Always 0.
 */
void print_most_numbers(void)
{
int a;
int b = '2';
int c = '4';
for (a = '0'; a <= '9'; a++)
{
if (a != b && a != c)
{
_putchar(a);
}
}
_putchar('\n');
}
