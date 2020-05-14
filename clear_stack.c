#include "monty.h"
/**
 * clear_stack - clear stack double linked
 * @h: pointer stack top
 */
void clear_stack(stack_t **h)
{
while (*h)
simple_pop(h);
}
