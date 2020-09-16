#include "monty.h"
/**
 * stack_pall - prints all element on the stack
 * @stack: Double pointer input
 * @line_number: line number
 *
 * Description: Function to print all element on the stack.
 * Return: void.
 */
void stack_pall(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp = *stack;
	(void)line_number;

	if (!stack || !*stack)
		return;
	while (tmp)
	{
		printf("%i\n", tmp->n);
		tmp = tmp->next;
	}
}
