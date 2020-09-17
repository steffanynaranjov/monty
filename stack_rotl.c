#include "monty.h"
/**
 * stack_rotl - rotate element left top become last
 * @stack: Double pointer input
 * @line_number: line number
 *
 * Description: Function to rotate elemts.
 * Return: void.
 */
void stack_rotl(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp = *stack;
	int top;
	(void) line_number;

	if (*stack)
	{
		top = (*stack)->n;
		while (tmp->next)
		{
			tmp->n = tmp->next->n;
			tmp = tmp->next;
		}
		tmp->n = top;
	}
}
