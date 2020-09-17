#include "monty.h"
/**
 * stack_add - add the top elements to the stack
 * @stack: Double pointer input
 * @line_number: line number
 *
 * Description: Function to add the top elements to the stack.
 * Return: void.
 */
void stack_add(stack_t **stack, unsigned int line_number)
{
	int x;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		printf("L%u: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	x = (*stack)->n;
	stack_pop(stack, line_number);
	(*stack)->n += x;
}
