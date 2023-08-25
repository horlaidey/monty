#include "monty.h"
/**
  *func_sub- sustration
  *@head: stack head
  *@counter: line_number
  *Return: no return
 */
void func_sub(stack_t **head, unsigned int counter)
{
	stack_t *ptr;
	int sus, nodes;

	ptr = *head;
	for (nodes = 0; ptr != NULL; nodes++)
		ptr = ptr->next;
	if (nodes < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
		fclose(bus->file);
		free(bus->content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	ptr = *head;
	sus = ptr->next->n - ptr->n;
	ptr->next->n = sus;
	*head = ptr->next;
	free(ptr);
}
