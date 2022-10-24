#include "main.h"
/**
 * print_rev - Write a function that prints a string, followed
 * by a new line, to stdout.
 * @s: an input string
 * Return: Nothing
 */
void print_rev(char *s)
{
int len = 0;
while (s[len] != '\0')
len++;
while (len)
_putchar(s[--len]);
_putchar('\n');
}
