#include "monty.h"
#include "lists.h"

/**
 * rot1_handler - 
 * @stack:
 * @line_number:
*/
void rot1_handler(stack_t **stack, unsigned int line_number)
{
    stack_t *temporary = *stack;
    int number = 0;

    (void)line_number;

    if(*stack == NULL)
            return;
    temporary = get_tnodeint_at_index(*stack, 0);
    number = temporary->n;
    delete_tnodeint_at_index(stack, 0);
    add_tnodeint_end(stack, num);
}

/**
 * rotr_handler - 
 * @stack:
 * @line_number:
*/
void rotr_handler(stack_t **stack, unsigned int line_number)
{
    stack_t *temporary = *stack;
    int number = 0;
    length = dlistint_t_length(*stack);

    (void)line_number;

    if(*stack == NULL)
            return;
    temporary = get_tnodeint_at_index(*stack, length-1);
    number = temporary->n;
    delete_tnodeint_at_index(stack, length-1);
    add_tnodeint_end(stack, number);

}

/**
 * stack_handler - 
 * @stack:
 * @line_number:
*/
void stack_handler(stack_t **stack, line_number)
{
    (void)stack;
    (void)line_number;
    data.qflag = 0;
}

/**
 * queue_handler - 
 * @stack:
 * @line_number:
*/
void queue_handler(stack_t **stack, line_number)
{
    (void)stack;
    (void)line_number;
    data.qflag = 1;
}