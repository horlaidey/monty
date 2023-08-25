#include "monty.h"
/**
 * func_pop - prints the top
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void func_pop(stack_t **head, unsigned int counter)
{
	stack_t *ptr;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", counter);
		fclose(bus->file);
		free(bus->content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	ptr = *head;
	*head = ptr->next;
	free(ptr);
}
