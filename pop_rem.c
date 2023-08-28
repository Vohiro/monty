#include "monty.h"
/**
 * f_pop - function to remove the top element
 * @top: top of the stack
 * @iterator: line numbering
 * Return: empty return
*/
void f_pop(stack_t **top, unsigned int iterator)
{
	stack_t *first;

	if (*top == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", iterator);
		fclose(bus.passed_file);
		free(bus.passed_content);
		evac_stack(*top);
		exit(EXIT_FAILURE);
	}
	first = *top;
	*top = first->next;
	free(first);
}
