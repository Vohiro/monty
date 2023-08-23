#include "monty.h"
/**
 * add_node - funtion to add node to the top element of the stack
 * @top_elem:top element of the stack
 * @n: new_value
 * Return: Empty
*/
void add_node(stack_t **top_elem, int n)
{

	stack_t *newnode, *other_elem;

	other_elem = *top_elem;
	newnode = malloc(sizeof(stack_t));
	if (newnode == NULL)
	{ printf("Error\n");
		exit(0); }
	if (other_elem)
		other_elem->prev = newnode;
	newnode->n = n;
	newnode->next = *top_elem;
	newnode->prev = NULL;
	*top_elem = newnode;
}
