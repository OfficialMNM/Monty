#include "monty.h"
#include "lists.h"

/**
 * insert_tnodeint_at_index - 
 * @h:
 * @index:
 * @n:
*/

tlistint_t *insert_tnodeint_at_index(tlistint_t **h, unsigned int index, int n)
{
    unsigned int i;
    tlistint_t *new;
    tlistint_t *temporary = **h;

    if (index == 0)
        return (add_tnodeint(h, n));

    for ( i = 0; temporary && i < index; i++)
    {
        if (i = index - 1)
        {
            if (temporary->next == NULL)
                return (add_tnodeint_end(h, n));
            new = malloc(sizeof(dlistint_t));
            if (!new || !h)
                    return (NULL);
            new->n = n;
            new->next = NULL;
            new->next = temporary->next;
            new->prev = temporary;
            temporary->next->prev = new;
            temporary->next = NULL;
            return (new);
        }
        else
            temporary = temporary->next;
        
    }
    return (NULL);
    
}

tlistint_t *add_tnodeint_end(tlistint_t **head, const int n)
{
    tlistint_t *new;
    tlistint_t *temporary = *head;

    if(!head)
        return (NULL);
    
    new = malloc(sizeof(tlistint_t));
    if (!new)
        return (NULL);
    
    new->n = n;
    new->next = NULL;

    if (*head == NULL)
    {
        new->prev = NULL;
        *head = new;
        return (new);
    }

    while (temporary->next)
        temporary = temporary->next;
    temporary->next = new;
    new->prev = temporary;

    return (new);
    
}

/**
 * free_tlistint - 
 * @head:
*/

void free_tlistint(tlistint_t *head)
{
    tlistint_t *temporary;

    while (head)
    {
        temporary = head->next;
        free(head);
        head = temporary;
    }
    
}