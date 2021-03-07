/*
** EPITECH PROJECT, 2020
** dot h
** File description:
** pushswap
*/

#ifndef PUSHSWAP_H
    #define PUSHSWAP_H

    #include "struct.h"

    #include <unistd.h>
    #include <stdlib.h>

    int my_printf(const char *, ...);
    int my_getnbr(char *);
    void create_list(sort_t **, int);
    void algo(sort_t **, sort_t **, int);
    void two_nb_algo(sort_t **);
    void display_list(sort_t *);
    void display(sort_t *list_a, sort_t *list_b);
    void sab(sort_t **);
    void pab(sort_t **, sort_t **);
    void rab(sort_t **);
    int check_sorted(sort_t **);
    sort_t *init_tmp();

#endif