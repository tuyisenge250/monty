#include "monty.h"
/**
 * adddnode - add node to head stack
 * @head: head of stack
 * @n: nwe_value
 * Return: no return
 */
void addnode(stack_t **head, int n)
{       
        stack_t *newnode, *aux;
        
        aux = *head;
        newnode = malloc(sizeof(stack_t));
	if(newnode == NULL)
	{
		printf("error\n");
		exit(0);
	}
	if(aux)
		aux->prev = newnode;
	newnode->n = n;
	newnode->next = *head;
	newnode->prev = NULL;
	*head = newnode;
}
