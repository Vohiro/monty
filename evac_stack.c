#include "monty.h"
/**
* evac_stack - funtion to evacuate a doubly linked list
* @top_elem: top element of the stack
*/
void evac_stack(stack_t *top_elem)
{
	stack_t *other_elem;

	other_elem = top_elem;
	while (top_elem)
	{
		other_elem = top_elem->next;
		free(top_elem);
		top_elem = other_elem;
	}
}
