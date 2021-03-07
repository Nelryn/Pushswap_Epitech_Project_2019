/*
** EPITECH PROJECT, 2020
** move 1st elem of one list to another
** File description:
** pushswap
*/

#include "struct.h"
#include "pushswap.h"

void pab(sort_t **src, sort_t **dest)
{
    sort_t *save = *src;
    sort_t *here = *dest;

    if (*src == NULL)
        return;
    save = save->next;
    (*src)->next = *dest;
    if (*dest == NULL) {
        *dest = *src;
        (*dest)->next = NULL;
    } else {
        *dest = *src;
        (*dest)->next = here;
    }
    *src = save;
}