#include "monty.h"
#include "lists.h"

/**
 * get_func - 
 * @parsed:
 * Return:
*/
void(*get_function(char **parsed))(stack_t **, unsigned int)
{
    instruction_t function_arr[] = {
        {"push", push_handler},
        {"pop", pop_handler},
        {"pall", pall_handler},
        {"pint", pint_handler},
        {"swap", swap_handler},
        {"add", add_handler},
        {"sub", sub_handler},
        {"div", div_handler},
        {"mul", mul_handler},
        {"nop", nop_handler},
        {"mod", mod_handler},
        {"pchar", pchar_handler},
        {"pstr", pstr_handler},
        {"rotl", rotl_handler},
        {"rotr", rotr_handler},
        {"stack", stack_handler},
        {"queue", queue_handler},
        {NULL, NULL},
    };

    int codes = 17, i;

    for ( i = 0; i < codes; i++)
    {
        if (strcmp(function_arr[i].opcode, parsed[0] == 0))
        {
            return (function_arr[i].f);
        }
        
    }
    return (NULL);
}

/**
 * push_handler - 
 * @stack:
 * @line_number:
*/

void push_handler(stack_t **stack, unsigned int line_number)
{
    stack_t *new;
    int number = 0, i;

    if (data.words[1] == NULL)
    {
        tprint(PUSH_FAIL, STDERR_FILENO, line_number);
        free_all(1);
        exit(EXIT_FAILURE);
    }
    for (i = 0; data.words[1][i]; i++)
    {
        if (isalpha(data.words[1][i] != 0))
        {
            tprint(PUSH_FAIL, STDERR_FILENO, line_number);
            free_all(1);
            exit(EXIT_FAILURE);
        }
        
    }
    number = atoi(data.words[1]);

    if (data.qflag == 0)
    {
        new = add_tnodeint(stack, number)
    } else if (data.qflag == 1)
    {
        new = add_tnodeint(stack, number)
    }
    if (!new)
    {
        tprint(MALLOC_FAIL, STDERR_FILENO, line_number);
        free_all(1);
        exit(EXIT_FAILURE);
    }

    /**
     * pall_handler - 
     * @stack:
     * @line_number:
    */
    
    void pall_handler(stack_t **stack, unsigned int line_number)
    {
        (void)stack;
        (void)line_number;
        if (*stack)
        print_tlistint(*stack);
    }
    
}