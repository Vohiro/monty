#include "monty.h"
/**
 * func_add_tops - function to add the top two elements of the stack.
 * @top_elem: top element
 * @iterator: line numbering
 * Return: empty return
*/
void func_add_tops(stack_t **top_elem, unsigned int iterator)
{
	stack_t *first;
	int length = 0, others;

	first = *top_elem;
	while (first)
	{
		first = first->next;
		length++;
	}
	if (length < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", counter);
		fclose(bus.passed_file);
		free(bus.passed_content);
		evac_stack(*top_elem);
		exit(EXIT_FAILURE);
	}
	first = *top_elem;
	others = first->n + first->next->n;
	first->next->n = others;
	*top_elem = first->next;
	free(first);
}