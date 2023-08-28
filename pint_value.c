#include "monty.h"
/**
 * f_pint - prints the value at the top of the stack
 * @top: top element of the stack
 * @iterator: line iterator
 * Return: empty retun
*/
void f_pint(stack_t **top, unsigned int iterator)
{
	if (*top == NULL)
	{
		fprintf(stderr, "L%u: can't pint an stack empty\n", iterator);
		fclose(bus.passed_file);
		free(bus.passed_content);
		evac_stack(*top);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*top)->n);
}
