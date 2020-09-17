#include "monty.h"
/**
 * stack_nop - do nothing
 * @stack: Double pointer input
 * @line_number: line number
 *
 * Description: Function to do nothing to the stack.
 * Return: void.
 */
void stack_nop(stack_t **stack, unsigned int line_number)
{
	(void)**stack;
	(void)line_number;
}
