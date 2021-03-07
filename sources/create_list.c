/*
** EPITECH PROJECT, 2020
** create my list
** File description:
** pushswap
*/

#include "pushswap.h"
#include "struct.h"

void create_list(sort_t **start, int data)
{
    sort_t *new = malloc(sizeof(sort_t));
    sort_t *tmp = *start;

    new->nb = data;
    new->next = NULL;
    if (*start == NULL)
        *start = new;
    else {
        while (tmp->next != NULL) {
            tmp = tmp->next;
        }
        tmp->next = new;
    }
}
