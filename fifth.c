#include "monty.h"
#include "lists.h"

/**
 * sub_handler - 
 * @stack:
 * @line_number:
*/
void sub_handler(stack_t **stack, unsigned int line_number)
{
    int sub = 0;
    stack_t *node = NULL;
    stack_t *node_0 = get_tnodeint_at_index(*stack, 0);
    stack_t *node_1 = get_tnodeint_at_index(*stack, 1);

    if (dlistint_t_length(*stack < 2))
    {
        tprint(SUB_FAIL, STDERR_FILENO, line_number);
        free_all(1);
        exit(EXIT_FAILURE);
    }
    
    sub = node_1->n - node_0->n;
    delete_tnodeint_at_index(stack, 0);
    delete_tnodeint_at_index(stack, 1);
    node = add_tnodeint(stack, sub);
    if(!node)
    {
        tprint(MALLOC_FAIL, STDERR_FILENO, line_number);
        free_all(1);
        exit(EXIT_FAILURE);
    }
}

/**
 * add_handler - 
 * @stack:
 * @line_number:
*/
void div_handler(stack_t **stack, unsigned int line_number)
{
    int div = 0;
    stack_t *node = NULL;
    stack_t *node_0 = get_tnodeint_at_index(*stack, 0);
    stack_t *node_1 = get_tnodeint_at_index(*stack, 1);

    if (dlistint_t_length(*stack < 2))
    {
        tprint(DIV_FAIL, STDERR_FILENO, line_number);
        free_all(1);
        exit(EXIT_FAILURE);
    }

    if (node_0->n ==0 )
    {
        tprint(DIV_ZERO, STDERR_FILENO, line_number);
        free_all(1);
        exit(EXIT_FAILURE);
    }
    
    div = node_1->n / node_0->n;
    delete_tnodeint_at_index(stack, 0);
    delete_tnodeint_at_index(stack, 1);
    node = add_tnodeint(stack, div);
    if(!node)
    {
        tprint(MALLOC_FAIL, STDERR_FILENO, line_number);
        free_all(1);
        exit(EXIT_FAILURE);
    }
}

/**
 * mul_handler - 
 * @stack:
 * @line_number:
*/
void mul_handler(stack_t **stack, unsigned int line_number)
{
    int mul = 0;
    stack_t *node = NULL;
    stack_t *node_0 = get_tnodeint_at_index(*stack, 0);
    stack_t *node_1 = get_tnodeint_at_index(*stack, 1);

    if (dlistint_t_length(*stack < 2))
    {
        tprint(MUL_FAIL, STDERR_FILENO, line_number);
        free_all(1);
        exit(EXIT_FAILURE);
    }

    mul = node_1->n * node_0->n;
    delete_tnodeint_at_index(stack, 0);
    delete_tnodeint_at_index(stack, 1);
    node = add_tnodeint(stack, mul);
    if(!node)
    {
        tprint(MALLOC_FAIL, STDERR_FILENO, line_number);
        free_all(1);
        exit(EXIT_FAILURE);
    }
}

/**
 * mod_handler - 
 * @stack:
 * @line_number:
*/
void mod_handler(stack_t **stack, unsigned int line_number)
{
    int mod = 0;
    stack_t *node = NULL;
    stack_t *node_0 = get_tnodeint_at_index(*stack, 0);
    stack_t *node_1 = get_tnodeint_at_index(*stack, 1);

    if (dlistint_t_length(*stack < 2))
    {
        tprint(MOD_FAIL, STDERR_FILENO, line_number);
        free_all(1);
        exit(EXIT_FAILURE);
    }

    if (node_0->n ==0 )
    {
        tprint(DIV_ZERO, STDERR_FILENO, line_number);
        free_all(1);
        exit(EXIT_FAILURE);
    }
    
    mod = node_1->n % node_0->n;
    delete_tnodeint_at_index(stack, 0);
    delete_tnodeint_at_index(stack, 1);
    node = add_tnodeint(stack, mod);
    if(!node)
    {
        tprint(MALLOC_FAIL, STDERR_FILENO, line_number);
        free_all(1);
        exit(EXIT_FAILURE);
    }
}