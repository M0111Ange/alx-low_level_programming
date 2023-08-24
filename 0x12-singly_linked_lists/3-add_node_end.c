#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 *add_node_end - Adds a new node to the end of a singly linked list
 *@head: Pointer to pointer that points to first node
 *@str: String to be placed in the new node
 *Return: A pointer to the head, or NULL if unssuccesful
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));
	list_t *ptr = *head;

	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	ptr->next = new;
	return (ptr->next);
}

/**
 * _strlen - reset number
 * Description: This function return a length for some string
 *
 * @s: pointer char
 * Return: int length
 *
 */
int _strlen(const char *s)
{
	int len = 0;

	while (*s++)
	{
		len++;
	}

	return (len);
}
