/*
** EPITECH PROJECT, 2020
** display
** File description:
** pushswap
*/

#include "struct.h"
#include "pushswap.h"

void display_list(sort_t *list)
{
    while (list != NULL) {
        my_printf("%d ", list->nb);
        list = list->next;
    }
}

void display(sort_t *list_a, sort_t *list_b)
{
    display_list(list_a);
    display_list(list_b);
    my_printf("\n");
}