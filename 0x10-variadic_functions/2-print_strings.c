#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_strings - print numbersfunction
 * @n: number of arguments
 * @separator: seperatoor string
 * Return: return
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list strings;
char *s;
unsigned int i;
va_start(strings, n);
for (i = 0; i < n; i++)
{
s = va_arg(strings, char *);
if (s == NULL)
printf("(nil)");
else
printf("%s", s);
if (i != (n - 1) && separator != NULL)
printf("%s", separator);
}
putchar('\n');
va_end(strings);
}
