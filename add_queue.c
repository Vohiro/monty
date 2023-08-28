#include "monty.h"
/**
 * addqueue - funtion to add node to the bottom of the stack
 * @n: new value
 * @top: top element of the stack
 * Return: empty
*/
void addqueue(stack_t **top, int n)
{
	stack_t *newnode, *others;

	others = *top;
	newnode = malloc(sizeof(stack_t));
	if (newnode == NULL)
	{
		printf("Error\n");
	}
	newnode->n = n;
	newnode->next = NULL;
	if (others)
	{
		while (others->next)
			others = others->next;
	}
	if (!others)
	{
		*top = newnode;
		newnode->prev = NULL;
	}
	else
	{
		others->next = newnode;
		newnode->prev = others;
	}
}
