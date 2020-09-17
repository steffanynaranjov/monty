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
	stack_t *tmp = *stack, *top;
	(void) line_number;

	if (dlistint_len(*stack) < 2)
		return;
	top = (*stack)->next;
	top->prev = NULL;

	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = *stack;
	(*stack)->next = NULL;
	(*stack)->prev = tmp;
	(*stack) = top;
}
