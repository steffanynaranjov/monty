#include "monty.h"
/**
 * stack_pint - prints the head element
 * @stack: Double pointer input
 * @line_number: line number
 *
 * Description: Function to print the first element on the stack.
 * Return: void.
 */
void stack_pint(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp = *stack;
	(void) line_number;

	if (tmp == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	else if (!stack || !*stack)
		return;
	printf("%i\n", tmp->n);
}
