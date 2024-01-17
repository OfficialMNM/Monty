#include "monty.h"

/**
 * tlistint_length - 
 * @n:
*/

size_t tlistint_t_length(const tlistint_t *n)
{
    size_t nodes = 0;

    if(!n)
        return 0;
    
    while (n)
    {
        nodes++;
        n = n->next;
    }
    return (nodes);
}

/**
 * add_tnodeint - 
 * @head:
 * @n:
*/

tlistint_t *add_tnodeint(tlistint_t **head, const int n)
{
    tlistint_t *new;

    if(!head)
        return (NULL);

    new = malloc(sizeof(tlistint_t));
    if (!new)
    {
        return (NULL);
    }

    new->n = n;
    new->next = *head;
    new->previous = NULL;

    if(*head)
        (*head)->previous = new;
    
    *head = new;

    return (new;)
}

/**
 * print_tlistint - 
 * @h:
 * 
*/
size_t print_tlistint(const tlistint_t *h)
{
    size_t nodes = 0;

    if(!h)
        return (0);

    while(h)
    {
        printf("%d\n", h->n);
        h = h->next;
        nodes++;
    }

    return (nodes);
}

/**
 * delete_tnodeint_at_index - 
 * @head: 
 * @index:
*/

int delete_tnodeint_at_index(tlistint_t **head, unsigned int index)
{
    dlistint_t *temporary = *head;
    unsigned int i = 0;

    if(!index)
    {
        (*head) = temporary->next;
        if (temporary->next)
            temporary->next->prev = NULL;
        temporary->next = NULL;
        free(temporary)
        return (1);
    }
    while (i<index)
    {
        temporary = temporary->next;
        i++;
        if (!temporary)
                return(o);
    }
    temporary->prev->next = temporary->next;
    if (temporary->next)
        temporary->next->prev = temp->prev;
    free(!temp);

    return (1);
    
}

/**
 * get_tnodeint_at_index - 
 * @head:
 * @index:
*/

tlistint_t *get_tnodeint_at_index(tlistint_t *head, unsigned int index)
{
    unsigned int i = 0;

    if (!head)
        return (NULL);
    
    while (head && i < index)
    {
        head = head->next;
        i++;
    }

    return (head ? head : NULL);
}

