/*
** EPITECH PROJECT, 2020
** move 1st elem to last
** File description:
** my_pushswap
*/

#include "struct.h"
#include "pushswap.h"

void rab(sort_t **head)
{
    sort_t *save = *head;
    sort_t *tmp = *head;

    save = save->next;
    if (save == NULL)
        return;
    while (tmp->next != NULL)
        tmp = tmp->next;
    tmp->next = *head;
    (*head)->next = NULL;
    *head = save;
}