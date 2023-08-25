#include "monty.h"
/**
 * func_div - divides the top two elements of the stack.
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void func_div(stack_t **head, unsigned int counter)
{
	stack_t *ptr;
	int len = 0, temp;

	ptr = *head;
	while (ptr)
	{
		ptr = ptr->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", counter);
		fclose(bus->file);
		free(bus->content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	ptr = *head;
	if (ptr->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", counter);
		fclose(bus->file);
		free(bus->content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	temp = ptr->next->n / ptr->n;
	ptr->next->n = temp;
	*head = ptr->next;
	free(ptr);
}
