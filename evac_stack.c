#include "monty.h"
/**
* evac_stack - funtion to evacuate a doubly linked list
* @top: top element of the stack
*/
void evac_stack(stack_t *top)
{
	stack_t *others;

	others = top;
	while (top)
	{
		others = top->next;
		free(top);
		top = others;
	}
}
