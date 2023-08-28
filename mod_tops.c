#include "monty.h"
/**
 * f_mod - computes the rest of the division of the second
 * top element of the stack by the top element of the stack
 * @top: top elem
 * @iterator: line numbering
 * Return: empty return
*/
void f_mod(stack_t **top, unsigned int iterator)
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
	if (first->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", iterator);
		fclose(bus.passed_file);
		free(bus.passed_content);
		evac_stack(*top);
		exit(EXIT_FAILURE);
	}
	others = first->next->n % first->n;
	first->next->n = others;
	*top = first->next;
	free(first);
}
