#include "monty.h"
#include <stdio.h>

bus_t bus = {NULL, NULL, NULL, 0};

/**
* main - this is the main  monty code interpreter
* @argc: number of arguments passed into the interpreter
* @argv: this is argument vector for number of argument passed
* Return:if successful return 0
*/
int main(int argc, char *argv[])
{
	char *passed_content;
	FILE *passed_file;
	size_t size = 0;
	ssize_t line_reader = 1;
	stack_t *stack = NULL;
	unsigned int iterator = 0;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	passed_file = fopen(argv[1], "r");
	bus.passed_file = passed_file;
	if (!passed_file)
	{
		fprintf(stderr, "Error: Can't open %s\n file", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (line_reader > 0)
	{
		passed_content = NULL;
		line_reader = getline(&passed_content, &size, passed_file);
		bus.passed_content = passed_content;
		iterator++;
		if (line_reader > 0)
		{
			execute(passed_content, &stack, iterator, passed_file);
		}
		free(passed_content);
	}
	evac_stack(stack);
	fclose(passed_file);
return (0);
}
