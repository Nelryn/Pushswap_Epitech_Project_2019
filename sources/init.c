/*
** EPITECH PROJECT, 2020
** init tmp
** File description:
** pushswap
*/

#include "struct.h"
#include "pushswap.h"

sort_t *init_tmp(void)
{
    sort_t *tmp = malloc(sizeof(sort_t));

    tmp->nb = 0;
    tmp->next = NULL;
    return (tmp);
}