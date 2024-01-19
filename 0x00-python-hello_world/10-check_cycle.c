#include <stdio.h>
#include "lists.h"
/**
 * check_cycle-checks if list is a cycle
 * @list- input list
 *
 * Return: 1 on success, 0 otherwise
 */
int check_cycle(listint_t *list)
{
	listint_t *tmp = list;

	while (tmp)
	{
		if (tmp->next == list)
			return (1);
		tmp = tmp->next;
	}
	return (0);
}
