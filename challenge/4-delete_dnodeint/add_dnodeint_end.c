#include "lists.h"
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
    dlistint_t *new = malloc(sizeof(dlistint_t));
    dlistint_t *temp;

    if (!new)
        return NULL;
    new->n = n;
    new->next = NULL;

    if (!*head)
    {
        new->prev = NULL;
        *head = new;
        return new;
    }

    temp = *head;
    while (temp->next)
        temp = temp->next;

    temp->next = new;
    new->prev = temp;
    return new;
}
