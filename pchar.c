#include "monty.h"
/**
 * pchar - entry point
 * @stack: stack_t variable
 * @line_number: unsigned int variable
 */
void pchar(stack_t **stack, unsigned int line_number)
{
int letter;
if (*stack == NULL)
{
fprintf(stderr, "L%d: can't pchar, stack empty\n", line_number);
exit(EXIT_FAILURE);
}
letter = (*stack)->n;
if (letter >= 0 && letter <= 255)
{
putchar(letter);
putchar('\n');
}
else
{
fprintf(stderr, "L%d: can't pchar, value out of range,\n", line_number);
exit(EXIT_FAILURE);
}
}
