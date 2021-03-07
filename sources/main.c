/*
** EPITECH PROJECT, 2020
** main
** File description:
** pushswap
*/

#include "struct.h"
#include "pushswap.h"

int main(int ac, char **av)
{
    sort_t *list_a = NULL;
    sort_t *list_b = NULL;
    int arg = 1;

    if (ac == 1) {
        write(2, "Not enough arguments\n", 21);
        return (84);
    }
    while (arg != ac) {
        create_list(&list_a, my_getnbr(av[arg]));
        arg++;
    }
    (ac == 3) ? two_nb_algo(&list_a) : 0;
    (ac > 3 || ac == 2) ? algo(&list_a, &list_b, ac) : 0;
    display(list_a, list_b);
    free (list_a);
    free (list_b);
    return (0);
}