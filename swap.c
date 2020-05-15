#include "monty.h"
/**
 * _swap - swap
 * @stack: pointer to list
 * @line_number: number of line opcode occurs on
 */
void _swap(stack_t **stack, unsigned int line_number)
{
stack_t *runner;
int tmp;
runner = *stack;
if (runner == NULL || runner->next == NULL)
{
fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
exit(EXIT_FAILURE);
}
tmp = runner->n;
runner->n = runner->next->n;
runner->next->n = tmp;
}
