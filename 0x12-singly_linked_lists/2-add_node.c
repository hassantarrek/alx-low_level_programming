#include "lists.h"

/**
 * add_node -  adds a new node at the beginning of a list_t
 * @head: pointer
 * @str: string
 * Return: new elemnt adress
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;
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
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}
