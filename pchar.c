#include "monty.h"
/**
 * f_pchar -  adds the top two elements of the stack
 * @head: stack head
 * @counter: line_number
 * Return: no return
 */
void f_pchar(stack_t **head, unsigned int counter)
{
	stack_t *h;

        h = *head;

        if (!h)
        {
                fprintf(stderr, "L%u: can't pint, stack empty\n", counter);
                fclose(bus.file);
                free(bus.content);
                free_stack(*head);
                exit(EXIT_FAILURE);
        }
	if (h->n > 127 || h->n <0)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", counter);
                fclose(bus.file);
                free(bus.content);
                free_stack(*head);
                exit(EXIT_FAILURE);
	}
	printf("%c\n", h->n);
}
