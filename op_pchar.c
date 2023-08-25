#include "monty.h"
/**
 * func_pchar - prints the char at the top of the stack,
 * followed by a new line
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void func_pchar(stack_t **head, unsigned int counter)
{
	stack_t *ptr;

	ptr = *head;
	if (!ptr)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", counter);
		fclose(bus->file);
		free(bus->content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	if (ptr->n > 127 || ptr->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", counter);
		fclose(bus->file);
		free(bus->content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", ptr->n);
}
