#include "monty.h"
/**
 * pop - pop removes the top stack
 * @stack: pointer top of the stack
 * @line_number: line_number, void argument
 */
void pop(stack_t **stack, unsigned int line_number)
{
stack_t *tmp;
if (*stack == NULL)
{
fprintf(stderr, "L%u: can't pop an empty stack\n", line_number);
exit(EXIT_FAILURE);
}
if ((*stack)->next)
{
tmp = (*stack)->next;
free(*stack);
(*stack) = tmp;
(*stack)->prev = NULL;
}
else
{
free(*stack);
*stack = NULL;
}
}
/**
 * simple_pop - pop removes top ele stack
 * @stack: pointertop of the stack
 */
void simple_pop(stack_t **stack)
{
stack_t *tmp;
if ((*stack)->next)
{
tmp = (*stack)->next;
free(*stack);
(*stack) = tmp;
(*stack)->prev = NULL;
}
else
{
free(*stack);
*stack = NULL;
}
}
