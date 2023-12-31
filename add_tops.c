#include "monty.h"
/**
 * f_add - function to add the top two elements of the stack.
 * @top: top element
 * @iterator: line numbering
 * Return: empty return
*/
void f_add(stack_t **top, unsigned int iterator)
{
	stack_t *first;
	int length = 0, others;

	first = *top;
	while (first)
	{
		first = first->next;
		length++;
	}
	if (length < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", iterator);
		fclose(bus.passed_file);
		free(bus.passed_content);
		evac_stack(*top);
		exit(EXIT_FAILURE);
	}
	first = *top;
	others = first->n + first->next->n;
	first->next->n = others;
	*top = first->next;
	free(first);
}
