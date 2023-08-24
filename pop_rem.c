#include "monty.h"
/**
 * func_pop_rem - function to remove the top element
 * @top_elem: top of the stack
 * @iterator: line numbering
 * Return: empty return
*/
void func_pop_rem(stack_t **top_elem, unsigned int iterator)
{
	stack_t *first;

	if (*top_elem == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", counter);
		fclose(bus.passed_file);
		free(bus.passed_content);
		evac_stack(*top_elem);
		exit(EXIT_FAILURE);
	}
	first = *top_elem;
	*top_elem = first->next;
	free(first);
}
