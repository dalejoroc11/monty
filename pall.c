#include "monty.h"
/**
 * pall - prints values stack, first the top
 * @stack: pointer stack top
 * @line_number: void arg
 */
void pall(stack_t **stack, unsigned int line_number)
{
stack_t *tmp;
(void) line_number;
for (tmp = *stack; tmp; tmp = tmp->next)
printf("%d\n", tmp->n);
}
