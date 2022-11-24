#include "lists.h"
/**
 * print_list - function to print all
 * @h: list
 * Return: number of members of list
 */
size_t print_list(const list_t *h)
{
size_t count = 0;
while (h)
{
if (h->str == NULL)
printf("[0] (nil)\n");
else
printf("[%d] %s\n", h->len, h->str);
count++;
h = h->next;
}
return (count);
}
