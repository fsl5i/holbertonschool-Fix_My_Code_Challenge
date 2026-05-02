#include "lists.h"

int main(void)
{
    dlistint_t *head = NULL;
    int i;

    for (i = 0; i <= 5; i++)
        add_dnodeint_end(&head, i);
    add_dnodeint_end(&head, 98);
    add_dnodeint_end(&head, 402);
    add_dnodeint_end(&head, 1024);

    print_dlistint(head);
    printf("-----------------\n");

    delete_dnodeint_at_index(&head, 0);
    delete_dnodeint_at_index(&head, 1);
    delete_dnodeint_at_index(&head, 2);
    delete_dnodeint_at_index(&head, 3);

    print_dlistint(head);
    free_dlistint(head);
    return 0;
}
