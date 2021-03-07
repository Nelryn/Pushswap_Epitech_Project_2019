/*
** EPITECH PROJECT, 2020
** l_a swap 1st 2 elem
** File description:
** pushswap
*/

#include "struct.h"
#include "pushswap.h"

void sab(sort_t **head)
{
    sort_t *this = *head;
    sort_t *tmp = init_tmp();

    this = this->next;
    if (this == NULL)
        return;
    tmp->nb = (*head)->nb;
    (*head)->nb = this->nb;
    this->nb = tmp->nb;
}