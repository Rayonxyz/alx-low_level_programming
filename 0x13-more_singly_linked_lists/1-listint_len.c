#include "lists.h"
#include <stdio.h>

/**
 * main - Entry point .
 *
 *
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t nbr_element = 0;
	const listint_t *current = h;

	while (current != NULL)
	{
		current = current->next;
		nbr_element++;
	}
	return (nbr_element);
}
