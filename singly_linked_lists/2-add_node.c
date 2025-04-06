#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
* _str_len - computes the length of a string manually.
* @str: a pointer to the string.
*
* Return: length of the string.
*/
size_t _str_len(const char *str)
{
	size_t len = 0;

	while (str[len] != '\0')
		len++;

	return (len);
}

/**
* add_node - adds a new node at the beginning of a list_t list.
* @head: a pointer to the head of the list.
* @str: string to be added to the new node.
*
* Return: address of the new element, or NULL if it failed.
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = _str_len(str);
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
