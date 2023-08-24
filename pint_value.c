#include "monty.h"
/**
 * func_pint_value - prints the value at the top of the stack
 * @top_elem: top element of the stack
 * @iterator: line iterator
 * Return: empty retun
*/
void func_pint_value(stack_t **top_elem, unsigned int iterator)
{
	if (*top_elem == NULL)
	{
		fprintf(stderr, "L%u: can't pint an stack empty\n", iterator);
		fclose(bus.passsed_file);
		free(bus.passed_content);
		evac_stack(*top_elem);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*top_elem)->n);
}
