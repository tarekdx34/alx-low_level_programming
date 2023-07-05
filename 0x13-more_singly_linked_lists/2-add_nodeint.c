#include "lists.h"
/**
 * add_nodeint - function that adds a new node at the beginning of a list
 *@head: pointer to the head of the list
 * @n: integer to be used as content
 *
 * Return: address of the newly added node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *NewNode;
NewNode = malloc(sizeof(listint_t));
if (NewNode != NULL)
{
NewNode->n = n;
NewNode->next = *head;
}
else
return (NULL);
if (*head != NULL)
NewNode->next = *head;
*head = NewNode;
return (NewNode);
}
