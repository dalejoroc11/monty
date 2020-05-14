#include "monty.h"
/**
 * get_instruc_func - select fun
 * @s: string
 * Return: pointer to fun
 */
void (*get_instruc_func(char *s))(stack_t **stack, unsigned int line_number)
{
instruction_t ops[] = {
{"pall", pall},
{"pint", pint},
{"pop", pop},
{"swap", swap},
{"add", add},
{"nop", nop},
{"sub", sub},
{"div", _div},
{"mul", _mul},
{NULL, NULL}
};
int i;
i = 0;
while (ops[i].opcode != NULL)
{
if (strcmp(s, ops[i].opcode) == 0)
{
return (ops[i].f);
}
i++;
}
exit(-1);
}
