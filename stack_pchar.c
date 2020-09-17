#include "monty.h"
/**
 * stack_pchar - print a char at the top of the stack
 * @stack: Double pointer input
 * @line_number: line number
 *
 * Description: Function to print char at the top of the stack.
 * Return: void.
 */
void stack_pchar(stack_t **stack, unsigned int line_number)
{
	stack_t *n = *stack;
	int x = 0;

	while (n)
	{
		x++;
		n = n->next;
	}

	if (x == 0)
	{
		fprintf(stderr, "L%u: can't pchar, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}

	if ((*stack)->n < 0 || (*stack)->n >= 128)
	{
		fprintf(stderr, "L%u: can't pchar, value out of range", line_number);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", (*stack)->n);
}
