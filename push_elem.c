#include "monty.h"
/**
 * f_push - pushes an element to the stack
 * @top: top element of the stack
 * @iterator: line iterator
 * Return: empty
*/
void f_push(stack_t **top, unsigned int iterator)
{
	int n, i = 0, flag = 0;

	if (bus.arg)
	{
		if (bus.arg[0] == '-')
			i++;
		for (; bus.arg[i] != '\0'; i++)
		{
			if (bus.arg[i] > 57 || bus.arg[i] < 48)
				flag = 1; }
		if (flag == 1)
		{ fprintf(stderr, "L%d: usage: push an integer\n", iterator);
			fclose(bus.passed_file);
			free(bus.passed_content);
			evac_stack(*top);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push an integer\n", iterator);
		fclose(bus.passed_file);
		free(bus.passed_content);
		evac_stack(*top);
		exit(EXIT_FAILURE); }
	n = atoi(bus.arg);
	if (bus.lifi == 0)
		addnode(top, n);
	else
		addqueue(top, n);
}
