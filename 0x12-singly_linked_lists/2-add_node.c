#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 *add_node - Adds a new node at the beggining of the list
 *@str: String to be placed in the new node
 *@head: A double pointer to the first node of the list
 *Return: returns a pointer to the head of the list or NULL if failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));

	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = *head;
	*head = new;
	return (*head);
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
