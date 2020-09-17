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
	int x = 0;

	if (dlistint_len(*stack) < 2)
	{
		printf("L%i: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	x = (*stack)->n;
	stack_pop(stack, line_number);
	(*stack)->n += x;
}
