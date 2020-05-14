#include "monty.h"
/**
 * push - push element stack
 * @stack: pointer from stack
 * @line_number: number line assign to the new element
 */
void push(stack_t **stack, unsigned int line_number)
{
stack_t *new;
char *argument;
int status;
if (!stack)
{
return;
}
new = malloc(sizeof(stack_t));
if (!new)
{
fprintf(stderr, "Error: malloc failed\n");
clear_stack(stack);
exit(EXIT_FAILURE);
}
argument = strtok(NULL, " ");
status = isnumber(argument);
if (status == -1)
{
fprintf(stderr, "L%u: usage: push integer\n", line_number);
exit(EXIT_FAILURE);
}
else
{
new->n = atoi(argument);
}
new->next = *stack;
new->prev = NULL;
if (*stack == NULL)
{
*stack = new;
}
else
{
(*stack)->prev = new;
*stack = new;
}
}
