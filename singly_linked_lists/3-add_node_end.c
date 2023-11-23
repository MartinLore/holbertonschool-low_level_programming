#include "lists.h"

/**
 * _strlen - returns the length of a string
 * @s: string to be evaluated
 *
 * Return: length of string
 */
int _strlen(const char *s)
{
    int i;

    for (i = 0; s[i]; i++);
    return (i);
}

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: pointer to pointer to head of list_t list
 * @str: string to be added to new node
 *
 * Return: address of new element or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)

{
    list_t *new, *temp;

    if (!str)
        return (NULL);
    new = malloc(sizeof(list_t));
    if (!new)
        return (NULL);
    new->str = strdup(str);
    if (!new->str)
    {
        free(new);
        return (NULL);
    }
    new->len = _strlen(str);
    new->next = NULL;
    if (!*head)
        *head = new;
    else
    {
        temp = *head;
        while (temp->next)
            temp = temp->next;
        temp->next = new;
    }
    return (new);
}
