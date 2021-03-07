/*
** EPITECH PROJECT, 2020
** algo
** File description:
** pushswap
*/

#include "struct.h"
#include "pushswap.h"

void two_nb_algo(sort_t **l_a)
{
    sort_t *this = *l_a;

    this = this->next;
    if (this == NULL)
        return;
    if ((*l_a)->nb > this->nb)
        sab(l_a);
}

void my_swap_la(int size, sort_t **l_a, sort_t **l_b)
{
    int i = 0;
    sort_t *this = *l_a;

    this = this->next;
    while (i != size && this != NULL) {
        if ((*l_a)->nb > this->nb)
            sab(l_a);
        else {
            pab(l_a, l_b);
            this = this->next;
            i++;
        }
    }
}

void my_swap_lb(int size, sort_t **l_a, sort_t **l_b)
{
    int i = 0;
    sort_t *there = (*l_b)->next;

    while (i != size && there != NULL) {
        if ((*l_b)->nb < there->nb)
            sab(l_b);
        else {
            ((*l_a)->nb < (*l_b)->nb) ? pab(l_a, l_b), rab(l_b) : 0;
            pab(l_b, l_a);
            there = there->next;
            i++;
        }
    }
}

void algo(sort_t **l_a, sort_t **l_b, int size)
{
    while (check_sorted(l_a) != 0) {
        my_swap_la(size, l_a, l_b);
        my_swap_lb(size, l_a, l_b);
        if (*l_b != NULL)
            my_swap_lb(size, l_a, l_b);
        pab(l_b, l_a);
    }
}