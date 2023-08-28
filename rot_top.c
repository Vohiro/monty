#include "monty.h"
/**
  *f_rotl - rotates the stack to the top
  *@top: top of the stack
  *@iterator: line numbering
  *Return: empty return
 */
void f_rotl(stack_t **top,  __attribute__((unused))
		unsigned int iterator)
{
	stack_t *tmp = *top, *others;

	if (*top == NULL || (*top)->next == NULL)
	{
		return;
	}
	others = (*top)->next;
	others->prev = NULL;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = *top;
	(*top)->next = NULL;
	(*top)->prev = tmp;
	(*top) = others;
}
