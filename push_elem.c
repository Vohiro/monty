#include "monty.h"
/**
 * push_elem - pushes an element to the stack
 * @top_elem: top element of the stack
 * @iterator: line iterator
 * Return: empty
*/
void func_push_elem(stack_t **top_elem, unsigned int iterator)
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
			evac_stack(*top_elem);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push an integer\n", iterator);
		fclose(bus.passed_file);
		free(bus.passed_content);
		evac_stack(*top_elem);
		exit(EXIT_FAILURE); }
	n = atoi(bus.arg);
	if (bus.lifi == 0)
		add_node(top_elem, n);
	else
		add_queue(top_elem, n);
}
