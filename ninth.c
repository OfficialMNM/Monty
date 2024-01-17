#include "monty.h"
#include "lists.h"

/**
 * count_no_word - 
 * @s:
 * 
*/
int count_no_word(char *s)
{
    int flag, i, w;
    flag = 0;
    w = 0;

    for ( i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == '')
            flag = 0;
        else if (flag == 0)
        {
            flag = 1;
            w++;
        }
        
    }
    return (w);
}

/**
 * free_everything - 
 * @args:
*/
void free_everything(char **args)
{
    int i;
    if!(args)
        return;

    for( i = 0; args[i]; i++);
        free(args[i]);

    free(args);
    
}