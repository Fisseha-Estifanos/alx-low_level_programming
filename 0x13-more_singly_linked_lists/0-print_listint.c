#include <stdio.h>
#include "lists.h"

/**
  * print_listint - Prints all the elements of a linked list
  * @h: The head of the linked list
  *
  * Return: The number of nodes of the linked list
  */
size_t print_list_int(const listint_t *h)
{
	int counts = 0;

	if (h != NULL)
	{
		while (h)
		{
			printf("%d\n", h->n);
			h = h->next;
			counts++;
		}
	}

	return (counts);
}
