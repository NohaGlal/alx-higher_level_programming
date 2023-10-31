#include <stdio.h>
#include <stdlib.h>
#include "lists.h"


/**
 * check_cycle - function to checkif a singaly linked list has cycle in it
 * @list: pointer to list to check
 * Return: 0 (if no cycle)
 *          1 (if there is a cycle)
 */
int check_cycle(listint_t *list)
{
	listint_t *slow = list, *fast = list;

	while (fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
			return (1);
	}
	return (0);
}

