#include "monty.h"
/**
 * pop - entry point
 * @stack: stack_t variable
 * @line_number: unsigned int variable
 */
void pop(stack_t **stack, unsigned int line_number)
{
stack_t *tmp;
tmp = *stack;
if ((tmp) == NULL)
{
fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
exit(EXIT_FAILURE);
}
if (tmp->next == NULL)
{
(*stack) = NULL;
free(tmp);
}
else
{
tmp = tmp->next;
tmp->prev = NULL;
}
}
