#include "main.h"
/**
 * print_rev - Write a function that prints a string, followed
 * by a new line, to stdout.
 * @s: an input string
 * Return: Nothing
 */
void print_rev(char *s)
{
int i = 0;
while (s[i] != '\0')
{
_putchar(s[i]);
i++;
}
_putchar('\n');
}
