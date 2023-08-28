#include "monty.h"
/**
 * addnode - funtion to add node to the top element of the stack
 * @top:top element of the stack
 * @n: new_value
 * Return: Empty
*/
void addnode(stack_t **top, int n)
{

	stack_t *newnode, *others;

	others = *top;
	newnode = malloc(sizeof(stack_t));
	if (newnode == NULL)
	{ printf("Error\n");
		exit(0); }
	if (others)
		others->prev = newnode;
	newnode->n = n;
	newnode->next = *top;
	newnode->prev = NULL;
	*top = newnode;
}
