#include "monty.h"
/**
 * f_pall - function to print all element of the stack
 * @top: top element of the stack
 * @iterator: not in use
 * Return: empty return
*/
void f_pall(stack_t **top, unsigned int iterator)
{
	stack_t *first;
	(void)iterator;

	first = *top;
	if (first == NULL)
		return;
	while (first)
	{
		printf("%d\n", first->n);
		first = first->next;
	}
}
