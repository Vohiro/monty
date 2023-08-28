#include "monty.h"
/**
  *f_sub - function to subtract top elements
  *@top: top element
  *@iterator: line numbering
  *Return: empty return
 */
void f_sub(stack_t **top, unsigned int iterator)
{
	stack_t *others;
	int sus, nodes;

	others = *top;
	for (nodes = 0; others != NULL; nodes++)
		others = others->next;
	if (nodes < 2)
	{
		fprintf(stderr, "L%d:stack too short\n", iterator);
		fclose(bus.passed_file);
		free(bus.passed_content);
		evac_stack(*top);
		exit(EXIT_FAILURE);
	}
	others = *top;
	sus = others->next->n - others->n;
	others->next->n = sus;
	*top = others->next;
	free(others);
}
