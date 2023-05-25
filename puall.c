#include "monty.h"

/**
* pallS - prints out the stack
* @h: stack head
* @count: unused parameter
* Return: void
*/

void pallS(stack_t **h, unsigned int count)
{
	stack_t *curr = *h
	(void)count;

	if (curr == NULL)
		return;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
	}
}
