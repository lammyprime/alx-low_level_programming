#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: pointer to head
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
dlistint_t *prev;
while (head)
{
prev = head;
head = head->next;
free(prev);
}
}
