#include "monty.h"
/**
 * mul - entry point
 * @stack: stack_t variable
 * @line_number: unsigned int variable
 */
void mul(stack_t **stack, unsigned int line_number)
{
unsigned int power;
if ((*stack == NULL) || ((*stack)->next == NULL && (*stack)->prev == NULL))
{
fprintf(stderr, "L%d: can't mul, stack too short\n", line_number);
exit(EXIT_FAILURE);
}
power = (*stack)->next->n * (*stack)->n;
pop(stack, 0);
pop(stack, 0);
push(stack, power);
}
