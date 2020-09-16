#include "monty.h"
/**
 * opcode_func - The opcode function
 * @str: String input
 * Description: Function to  validates the opcode
 *
 * Return: Void.
 */
void (*opcode_func(char *str))(stack_t **stack, unsigned int line_number)
{
	instruction_t all_opcode[] = {
		{"push", stack_push},
		{"pall", stack_pall},
		{"pint", stack_pint},
		{NULL, NULL}
	};

	int x = 0;

	for (; all_opcode[x].opcode; x++)
	{
		if (_strcmp(str, all_opcode[x].opcode) == 0)
			return (all_opcode[x].f);
	}
	return (NULL);
}
