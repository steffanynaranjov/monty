#include "monty.h"
/**
 * main - the main to get bytecode
 * @argc: arguments
 * @argv: Double pointer arguments
 *
 * Description: point for the monty program interpreter.
 * Return: 0 or 1.
 */
int main(int argc, char **argv)
{
	FILE *fd;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	fd = fopen(argv[1], "r");
	if (!fd)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	read_file(fd, argv[1]);
	return (EXIT_SUCCESS);
}
