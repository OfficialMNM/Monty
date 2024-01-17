#include "monty.h"
#include "lists.h"

/**
 * pint_handler - 
 * @stack:
 * @line_number:
*/

void pint_handler(stack_t **stack, unsigned int line_number)
{
    stack_t *head = *stack;

    if(!head)
    {
        tprint(PINT_FAIL, STDERR_FILENO, line_number);
        free_all(1);
        exit(EXIT_FAILURE);
    }
    printf("%d\n", head->n);
}

/**
 * pop_handler - 
 * @stack:
 * @line_number:
*/

void pop_handler(stack_t **stack, unsigned int line_number)
{   
    stack_t *temporary = *stack;
    if(!temporary)
    {
        tprint(POP_FAIL, STDERR_FILENO, line_number);
        free_all(1);
        exit(EXIT_FAILURE);
    }

    delete_tnodeint_at_index(stack, 0);
}

/**
 * add_handler - 
 * @stack:
 * @line_number:
*/
void add_handler(stack_t **stack, unsigned int line_number)
{
    int sum = 0;
    stack_t *node = NULL;
    stack_t *node_0 = get_tnodeint_at_index(*stack, 0);
    stack_t *node_1 = get_tnodeint_at_index(*stack, 1);

    if (dlistint_t_len(*stack < 2))
    {
        tprint(ADD_FAIL, STDERR_FILENO, line_number);
        free_all(1);
        exit(EXIT_FAILURE);
    }
    
    sum = node_0->n + node_1->n;
    delete_tnodeint_at_index(stack, 0);
    delete_tnodeint_at_index(stack, 1);
    node = add_tnodeint(stack, sum);
    if(!node)
    {
        tprint(MALLOC_FAIL, STDERR_FILENO, line_number);
        free_all(1);
        exit(EXIT_FAILURE);
    }
}

/**
 * nop_handler - 
 * @stack:
 * @line_number:
*/

void nop_handler(stack_t, unsigned int line_number)
{
    (void)stack;
    (void)line_number;
}

/**
 * swap_handler - 
 * @stack:
 * @line_number:
*/
void swap_handler(stack_t **stack, unsigned int line_number)
{
   stack_t *temporary = *stack;
   *node = NULL;
   int number;

    if (dlistint_t_len(*stack < 2))
    {
        tprint(SWAP_FAIL, STDERR_FILENO, line_number);
        free_all(1);
        exit(EXIT_FAILURE);
    }
    
    temporary = get_tnodeint_at_index(*stack, 1, number)
    number = temporary->n;
    delete_tnodeint_at_index(stack, 0);
    node = insert_tnodeint_at_index(stack, 1, number);
    if(!node)
    {
        tprint(MALLOC_FAIL, STDERR_FILENO, line_number);
        free_all(1);
        exit(EXIT_FAILURE);
    }
}