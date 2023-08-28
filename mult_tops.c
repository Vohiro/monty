#include "monty.h"
/**
 * f_mul - multiplies the top two elements of the stack.
 * @top: top element
 * @iterator: line numbering
 * Return: empty return
*/
void f_mul(stack_t **top, unsigned int iterator)
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
		fprintf(stderr, "L%d: stack too short\n", iterator);
		fclose(bus.passed_file);
		free(bus.passed_content);
		evac_stack(*top);
		exit(EXIT_FAILURE);
	}
	first = *top;
	others = first->next->n * first->n;
	first->next->n = others;
	*top = first->next;
	free(first);
}
