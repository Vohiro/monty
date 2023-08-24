#include "monty.h"
/**
 * add_queue - funtion to add node to the bottom of the stack
 * @n: new value
 * @top_elem: top element of the stack
 * Return: empty
*/
void add_queue(stack_t **top_elem, int n)
{
	stack_t *newnode, *other_elem;

	other_elem = *top_elem;
	newnode = malloc(sizeof(stack_t));
	if (newnode == NULL)
	{
		printf("Error\n");
	}
	newnode->n = n;
	newnode->next = NULL;
	if (other_elem)
	{
		while (other_elem->next)
			other_elem = other_elem->next;
	}
	if (!other_elem)
	{
		*top_elem = newnode;
		newnode->prev = NULL;
	}
	else
	{
		other_elem->next = newnode;
		newnode->prev = other_elem;
	}
}
