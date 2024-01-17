#include "monty.h"
#include "lists.h"

/**
 * pchar_handler - handles the pchar instruction
 * @stack: double pointer to the stack to push
 * @line_number: the line number in the file
*/

void pchar_handler(stack_t **stack, unsigned int line_number)
{
    stack_t *node = *stack;

    if (!node)
    {
        tprint(PCHAR_FAIL, STDERR_FILENO, line_number);
        free_all(1);
        exit(EXIT_FAILURE);
    }
    if (node->n < 0 || node->n >127)
    {
        tprint(STDERR_FILENO, PCHAR_RANGE, line_number);
        free_all(1);
        exit(EXIT_FAILURE);
    }
    putchar(node->n);
    putchar('\n');
}

/**
 * pstr_handler - handles the pstr instruction
 * @stack: double pointer to the stack to push
 * @line_number: the line number in the file
*/
void pstr_handler(stack_t **stack, unsigned int line_number)
{
    stack_t *node = *stack;

    (void)line_number;

    if (!node)
    {
        putchar('\n');
        return;
    }

    while (node && node->n >= 0 && node->n <= 127)
    {
        putchar(node->n)
        node = node->next;
    }
    putchar('\n');
}