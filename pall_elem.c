#include "monty.h"
/**
 * func_pall - function to print all element of the stack
 * @top_elem: top element of the stack
 * @iterator: not in use
 * Return: empty return
*/
void func_pall(stack_t **top_elem, unsigned int iterator)
{
	stack_t *first;
	(void)iterator;

	first = *top_elem;
	if (first == NULL)
		return;
	while (first)
	{
		printf("%d\n", first->n);
		first = first->next;
	}
}
