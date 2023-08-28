#ifndef MONTY_H
#define MONTY_H
#define  _POSIX_C_SOURCE 200809L
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;
/**
 * struct bus_s - variables -args, file, line content
 * @arg: value
 * @passed_file: pointer to monty file
 * @passed_content: pointer to line content
 * @lifi: flag change stack <-> queue
 * Description: carries values through the program
 */
typedef struct bus_s
{
	char *arg;
	FILE *passed_file;
	char *passed_content;
	int lifi;
}  bus_t;
extern bus_t bus;
/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
char *_realloc(char *ptr, unsigned int old_size, unsigned int new_size);
ssize_t getstdin(char **lineptr, int passed_file);
char  *clean_line(char *passed_content);
void f_push(stack_t **top, unsigned int iterator);
void f_pall(stack_t **top, unsigned int iterator);
void f_pint(stack_t **top, unsigned int iterator);
int execute(char *passed_content, stack_t **top,
	unsigned int iterator, FILE *passed_file);
void evac_stack(stack_t *top);
void f_pop(stack_t **top, unsigned int iterator);
void f_swap(stack_t **top, unsigned int iterator);
void f_add(stack_t **top, unsigned int iterator);
void f_nop(stack_t **top, unsigned int iterator);
void f_sub(stack_t **top, unsigned int iterator);
void f_div(stack_t **top, unsigned int iterator);
void f_mul(stack_t **top, unsigned int iterator);
void f_mod(stack_t **top, unsigned int iterator);
void f_pchar(stack_t **top, unsigned int iterator);
void f_pstr(stack_t **top, unsigned int iterator);
void f_rotl(stack_t **top, unsigned int iterator);
void f_rotr(stack_t **top, __attribute__((unused)) unsigned int iterator);
void addnode(stack_t **top, int n);
void addqueue(stack_t **top, int n);
void f_queue(stack_t **top, unsigned int iterator);
void f_stack(stack_t **top, unsigned int iterator);
#endif
