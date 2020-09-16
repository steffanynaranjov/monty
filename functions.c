#include "monty.h"
/**
 * _strcmp - Compares two strings
 * @s1: First
 * @s2: Second
 *
 * Description: Compares two strings
 * Return: dest
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
			return (0);
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

/**
 * _isdigit - Determine if is it a number
 * @c: The evaluated input
 *
 * Description: Determine if is it a number between 0 and 9
 * Return: 0 Value if it works
 */
int _isdigit(char *c)
{
	int x = 0;

	for (; c[x]; x++)
	{
		if (c[x] < 48 || c[x] > 57)
			return (0);
	}
		return (1);
}

/**
 * dlistint_len - Returns the number elements
 * @h: Doubly linked lists
 *
 * Description: Returns the number of elements in a
 * linked dlistint_t list
 * Return: The number of nodes
 */
size_t dlistint_len(const stack_t *h)
{
	size_t c = 0;

	while (h)
	{
		h = h->next;
		c++;
	}
	return (c);
}

/**
 * free_dlistint - free the double linked list
 * @head: Doubly linked lists head
 *
 * Description: function that free a dlistint_t list.
 * Return: nothing
 */
void free_dlistint(stack_t *head)
{
	stack_t *last;

	last = head;
	while (head)
	{
		last = head;
		head = head->next;
		free(last);
	}
	free(head);
}

/**
 * delete_node - delete the head node
 * @head: pointer to the list
 * Description: Function to delete the ehad node
 *
 * Return: void.
 */
void delete_node(stack_t **head)
{
	stack_t *tmp = *head, *tmp_n = NULL;

	tmp_n = tmp;
	if ((*tmp).next != NULL)
		(*tmp).next->prev = NULL;
	*head = (*tmp).next;
	free(tmp_n);
}
