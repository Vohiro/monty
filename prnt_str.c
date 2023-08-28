#include "monty.h"
/**
 * f_prnt - prints the string starting at the top of the stack,
 * followed by a new
 * @top: top of the stack
 * @iterator: line numbering
 * Return: empty return
*/
void f_pstr(stack_t **top, unsigned int iterator)
{
	stack_t *first;
	(void)iterator;

	first = *top;
	while (first)
	{
		if (first->n > 127 || first->n <= 0)
		{
			break;
		}
		printf("%c", first->n);
		first = first->next;
	}
	printf("\n");
}
