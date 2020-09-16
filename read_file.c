#include "monty.h"
/**
 * read_file - Read files and get the command
 * @fd: arguments
 * @filename: File name
 *
 * Description: Function that Read the command for the program interpreter.
 * Return: void.
 */
void read_file(FILE *fd, char *filename)
{
	int line_num = 1;
	size_t s_buff = 1;
	char *buff = NULL, *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
	stack_t *stack = NULL;
	(void) filename;

	while (getline(&buff, &s_buff, fd) != -1)
	{
		opcode = strtok(buff, DELIM);
		if (!opcode || opcode[0] == '#')
		{
			line_num++;
			continue;
		}
		f = opcode_func(opcode);
		if (!f)
		{
			fprintf(stderr, "L%d: unknown instruction %s\n", line_num, opcode);
			exit(EXIT_FAILURE);
		}
		f(&stack, line_num);
		line_num++;
	}
	free(buff);
	free_dlistint(stack);
	fclose(fd);
}
