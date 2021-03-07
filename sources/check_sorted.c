/*
** EPITECH PROJECT, 2020
** check sorted
** File description:
** pushswap
*/

#include "struct.h"
#include "pushswap.h"

int check_sorted(sort_t **l_a)
{
    int check = 0;
    sort_t *tmp = *l_a;
    sort_t *before = *l_a;

    tmp = tmp->next;
    if (tmp == NULL)
        return (0);
    if (tmp->next != NULL) {
        while (tmp->next != NULL) {
            if (before->nb > tmp->nb)
                check = 1;
            before = before->next;
            tmp = tmp->next;
        }
    } else if (before->nb > tmp->nb)
        check = 1;
    return (check);
}