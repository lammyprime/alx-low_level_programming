#include "function_pointers.h"
/**
 * print_name - function
 * @name: name
 * @f: pointer
 */
void print_name(char *name, void (*f)(char *))
{
f(name);
}
