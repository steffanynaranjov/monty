#include "monty.h"
/**
 * stack_pop - remove the first element on the stack
 * @stack: Double pointer input
 * @line_number: line number
 *
 * Description: Function to remove the first element on the stack.
 * Return: void.
 */
void stack_pop(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL)
	{
		fprintf(stderr, "L%i: can't pop an empty stack\n", n_line);
		exit(EXIT_FAILURE);
	}
	else
	{
		delete_node(stack);
	}
}
