#include "monty.h"
/**
 * stack_push - push an element to the stack
 * @stack: Double pointer input
 * @line_number: line number
 *
 * Description: Function to push an element to the stack.
 * Return: void.
 */
void stack_push(stack_t **stack, unsigned int line_number)
{
	stack_t *node;
	char *str;
	int n, f, s = 1;

	str = strtok(NULL, DELIM);
	if (!str)
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}
	if (*str == '-')
	{
		s = -1;
		str++;
	}
	f = _isdigit(str);
	if (f == 0)
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}
	n = atoi(str) * s;
	node = malloc(sizeof(stack_t));
	if (!node)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	node->n = n;
	node->next = *stack;
	node->prev = NULL;
	if (*stack)
		(*stack)->prev = node;
	*stack = node;
}
