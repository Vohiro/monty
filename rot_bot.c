#include "monty.h"
/**
  *f_rotr- rotates the stack to the bottom
  *@top: top of stack
  *@iterator: line numbering
  *Return: empty return
 */
void f_rotr(stack_t **top, __attribute__((unused))
		unsigned int iterator)
{
	stack_t *cpy;

	cpy = *top;
	if (*top == NULL || (*top)->next == NULL)
	{
		return;
	}
	while (cpy->next)
	{
		cpy = cpy->next;
	}
	cpy->next = *top;
	cpy->prev->next = NULL;
	cpy->prev = NULL;
	(*top)->prev = cpy;
	(*top) = cpy;
}
