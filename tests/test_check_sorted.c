/*
** EPITECH PROJECT, 2020
** B-CPE-110-RUN-1-1-pushswap-emilie.baunifais
** File description:
** test_check_sorted
*/

#include <criterion/criterion.h>
#include "pushswap.h"

Test(check_sorted, already_sorted)
{
    int res = 0;
    sort_t *l_a = NULL;
    char *av[] = {"1", "2", NULL};
    int arg = 0;

    while (av[arg] != NULL) {
        create_list(&l_a, my_getnbr(av[arg]));
        arg++;
    }
    res = check_sorted(&l_a);
    cr_assert_eq(res, 0);
}

Test(check_sorted, not_sorted)
{
    int res = 0;
    sort_t *l_a = NULL;
    char *av[] = {"1", "-27", NULL};
    int arg = 0;

    while (av[arg] != NULL) {
        create_list(&l_a, my_getnbr(av[arg]));
        arg++;
    }
    res = check_sorted(&l_a);
    cr_assert_eq(res, 1);
}