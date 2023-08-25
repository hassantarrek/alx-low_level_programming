#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t
 * @head: pointer
 * @str: string
 * Return: new elemnt adress
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode, *lastNode;
	int x = 0;

	newNode = malloc(sizeof(list_t));

	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->str = strdup(str);

	if (newNode->str == NULL)
	{
		free(newNode);
		return (NULL);
	}

	while (str[x] != '\0')
	{
		x++;
	}
	newNode->len = x;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}
	lastNode = *head;
	while (lastNode->next != NULL)
	{
		lastNode = lastNode->next;
	}
	lastNode->next = newNode;
	return (newNode);
}
