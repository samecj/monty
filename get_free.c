#include "monty.h"
/**
 *  get_free - Free stack
 *  @stack: Stack pointer
 *  Return: Void
 */

void get_free(stack_t *stack)
{
	stack_t *aux;

	aux = stack;
	while (stack)
	{
		aux = stack->next;
		free(stack);
		stack = aux;
	}
}
