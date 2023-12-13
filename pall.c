#include "monty.h"
/***
 * u_pall - print the stuck
 * @head: stack head
 * @counte: no used
 *
 * Return: no return
 */
void u_pall(stack_t **head, unsigned int counte)
{       
        stack_t *h;
	(void)counte;
	
	h = *head;
	if (h == NULL)
		return;
	while(n)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
