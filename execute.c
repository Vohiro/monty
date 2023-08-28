#include "monty.h"
/**
* execute - funtion to execute the opcode
* @stack: head linked list - stack
* @iterator: to iterate accross each line
* @passed_file: pointer to the passed monty file to executed
* @passed_content: pointer to the passed content(line by line) to excuted
* Return: empty
*/
int execute(char *passed_content, stack_t **stack,
	unsigned int iterator, FILE *passed_file)
{
	instruction_t opst[] = {
				{"push element", f_push},
				{"pall", f_pall}, {"pint", f_pint},
				{"pop", f_pop}, {"swap", f_swap},
				{"add", f_add},{"nop", f_nop},
				{"sub", f_sub},
				{"div", f_div},{"mul", f_mul},
				{"mod", f_mod},{"pchar", f_pchar},
				{"pstr", f_pstr}, {"rotl", f_rotl},{"rotr", f_rotr},
				{"queue", f_queue},
				{"stack", f_stack},
				{NULL, NULL}
				};
	unsigned int x = 0;
	char *op_code;

	op_code = strtok(passed_content, " \n\t");
	if (op_code && op_code[0] == '#')
		return (0);
	bus.arg = strtok(NULL, " \n\t");
	while (opst[x].opcode && op_code)
	{
		if (strcmp(op_code, opst[x].opcode) == 0)
		{	opst[x].f(stack, iterator);
			return (0);
		}
		x++;
	}
	if (op_code && opst[x].opcode == NULL)
	{ fprintf(stderr, "L%d: unknown instruction %s\n!!!", iterator, op_code);
		fclose(passed_file);
		free(passed_content);
		evac_stack(*stack);
		exit(EXIT_FAILURE); }
	return (1);
}
