#include "monty.h"
/**
 * stack_sub - substract the top element of the stack
 * @stack: Double pointer input
 * @line_number: line number
 *
 * Description: Function to push an element to the stack.
 * Return: void.
 */
void stack_sub(stack_t **stack, unsigned int line_number)
{
	int x = 0;

	if (dlistint_len(*stack) < 2)
	{
		fprintf(stderr, "L%i: can't sub, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	x += (*stack)->n;
	stack_pop(stack, line_number);
	(*stack)->n -= x;
}
