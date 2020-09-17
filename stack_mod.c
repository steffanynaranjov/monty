#include "monty.h"
/**
 * stack_mod - remainder of the top elements on the stack
 * @stack: Double pointer input
 * @line_number: line number
 *
 * Description: Function to give the remainder of the top elements on the stack.
 * Return: void.
 */
void stack_mod(stack_t **stack, unsigned int line_number)
{
	int x = 0;

	if (dlistint_len(*stack) < 2)
	{
		fprintf(stderr, "L%i: can't mod, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	x += (*stack)->n;
	stack_pop(stack, line_number);
	if (x == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_number);
		exit(EXIT_FAILURE);
	}
	(*stack)->n %= x;
}
