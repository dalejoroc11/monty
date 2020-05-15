#include "monty.h"
/**
 * pall - entry point
 * @stack: stack_t variable
 * @line_number: unsigned int variable
 */
void pall(stack_t **stack, unsigned int line_number)
{
stack_t *tmp;
(void)line_number;
tmp = *stack;
if (tmp == NULL)
return;
while (tmp)
{
printf("%d\n", tmp->n);
tmp = tmp->next;
}
}
