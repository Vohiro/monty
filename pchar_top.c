#include "monty.h"
/**
 * f_pchar - prints the char at the top of the stack,
 * followed by a new line
 * @top: top of the stack
 * @iterator: line numbering
 * Return: empty return
*/
void f_pchar(stack_t **top, unsigned int iterator)
{
	stack_t *first;

	first = *top;
	if (!first)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", iterator);
		fclose(bus.passed_file);
		free(bus.passed_content);
		evac_stack(*top);
		exit(EXIT_FAILURE);
	}
	if (first->n > 127 || first->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", iterator);
		fclose(bus.passed_file);
		free(bus.passed_content);
		evac_stack(*top);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", first->n);
}
