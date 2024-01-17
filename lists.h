#ifndef LISTS_H
#define LISTS_H

#include "monty.h"

size_t tlistint_t_length(const tlistint_t *n);
tlistint_t *add_tnodeint(tlistint_t **head, const int n);
size_t print_tlistint(const tlistint_t *h);
int delete_tnodeint_at_index(tlistint_t **head, unsigned int index);
tlistint_t *get_tnodeint_at_index(tlistint_t *head, unsigned int index);


tlistint_t *insert_tnodeint_at_index(tlistint_t **h, unsigned int index, int n);
tlistint_t *add_tnodeint_end(tlistint_t **head, const int n);
void free_tlistint(tlistint_t *head);

#endif
