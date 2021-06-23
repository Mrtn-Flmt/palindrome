/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main file
*/

#include "./../include/my.h"

int n_is_zero(char **av)
{
    if (av[1][1] == 'n' && my_atoi(av[2]) < 1)
        return (84);
    return (0);
}

int is_pal_if_p(char **av)
{
    int nb = my_atoi(av[2]);

    if (av[1][1] == 'p' && nb != rev_int(nb))
            return (84);
    return (0);
}

int is_pal_n(int nb, save_t *save)
{
    int new = 0;

    while (nb != rev_int(nb)
    && (save->it <= save->imax)
    && (save->it >= save->imin)) {
        new = rev_int(nb);
        nb += new;
        save->it++;
    }
    save->nb_pal = nb;
    if (nb == (rev_int(nb))) {
        print_n(save);
        return (0);
    }
    return (0);
}

int is_pal_p(int pal, save_t *save)
{
    for (int i = 1; i <= pal; i++) {
        if (can_become_pal(i, pal, save) == 0) {
            print_p(i, pal, save);
        }
    }
    return (0);
}

int can_become_pal(int nb, int pal, save_t *save)
{
    int new = 0;
    save->it = 0;

    while (nb <= pal) {
        if (pal == nb && save->it >= save->imin &&
            save->it <= save->imax) {
            return (0);
        }
        new = rev_int(nb);
        nb += new;
        save->it++;
    }
    return (1);
}