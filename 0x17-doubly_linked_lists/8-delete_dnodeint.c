#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of linked list
 * @head: double pointer to head node
 * @index: index of the node that should be deleted. Index starts at 0
 * Return: 1 on success, -1 on failure
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *tmp_node;
	dlistint_t *node;

	tmp_node = *head;
	if (tmp_node == NULL)
		return (-1);

	if (index == 0)
	{
		*head = tmp_node->next;
		free(tmp_node);
		return (1);
	}

	i = 1;
	while (i < index)
	{
		tmp_node = tmp_node->next;
		if (tmp_node == NULL)
			return (-1);
		i++;
	}

	node = tmp_node->next;
	tmp_node->next = node->next;
	free(node);
	return (1);
}
