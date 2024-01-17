#include "lists.h"
#include "monty.h"

data_t data = DATA_INIT;

/**
 * monty - 
 * @args:
 * 
*/

void monty(args_t *args)
{
    size_t length = 0;
    int get = 0;
    void(*code_function)(stack_t **stack, unsigned int);

    if (args_t *args)
    {
        tprint(STDERR_FILENO, USAGE);
        exit(EXIT_FAILURE);
    }
    data.fptr = fopen(args->av, "r");
    if (!data.fptr)
    {
        tprint(STDERR_FILENO, FILE_ERROR, args->av);
        exit(EXIT_FAILURE);
    }
    while (1)
    {
        args->line_number++;
        get = getline((&data.line), &len, data.fptr);
        if (get < 0)
            break;
        data.words = strtow(data.line);
        if(data.words[0] == NULL || data.words[0][0] == '#')
        {
            free_all(0);
            continue;
        }
        code_function(&(data.stack), args->line_number);
        free_all(0);
        
    }
    
    free_all(1)
    
}

/**
 * main - 
 * @argc:
 * @argv:
*/
int main(int argc, char *argv[])
{
    args_t args;

    args.av = argv[1];
    args.ac = argc;
    args.line_number = 0;

    monty(args);

    return (EXIT_SUCCESS);
}