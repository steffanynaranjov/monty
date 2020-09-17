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
	int x;

	if (*stack == NULL)
	{
		fprintf(stderr, "L%i: can't pchar, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	x = (*stack)->n;
	if (!(x >= 0 && x <= 127))
	{
		fprintf(stderr, "L%i: can't pchar, value out of range", line_number);
		exit(EXIT_FAILURE);
	}
	putchar(x);
	putchar('\n');
}
