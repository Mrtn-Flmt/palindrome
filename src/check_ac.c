/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main file
*/

#include "./../include/my.h"

int check_t(int ac, char **av, save_t *save)
{
    if (ac == 3) {
        save = malloc(sizeof(save_t));
        save = set_save(save, av[2]);
        if (n_or_p(av) == 84 || is_int(av[2]) == 84 ||
            is_pal_if_p(av) == 84 || n_is_zero(av) == 84) {
            my_printf("invalid argument\n");
            return (84);
        }
        if (av[1][1] == 'n')
            is_pal_n(save->nb, save);
        if (av[1][1] == 'p')
            is_pal_p(save->nb, save);
        return (0);
    }
    return (0);
}

int check_c(int ac, char **av, save_t *save)
{
    if (ac == 5) {
        save = malloc(sizeof(save_t));
        save = set_save(save, av[2]);
        if (n_or_p(av) == 84 || is_int(av[2]) == 84 ||
            check_b(ac, av, save) == 84 || is_int(av[4]) ||
            is_pal_if_p(av) == 84 || n_is_zero(av) == 84) {
            my_printf("invalid argument\n");
            return (84);
        }
        if (av[1][1] == 'n')
            is_pal_n(save->nb, save);
        if (av[1][1] == 'p')
            is_pal_p(save->nb, save);
        return (0);
    }
    return (0);
}

int check_s(int ac, char **av, save_t *save)
{
    if (ac == 7) {
        save = malloc(sizeof(save_t));
        save = set_save_s(save, av);
        if (n_or_p(av) == 84 || is_int(av[2]) == 84 ||
            check_b(ac, av, save) == 84 || is_int(av[4]) ||
            check_imin(av, save) == 84 || is_pal_if_p(av) == 84 ||
            n_is_zero(av) == 84) {
            my_printf("invalid argument\n");
            return (84);
        }
        if (av[1][1] == 'n')
            is_pal_n(save->nb, save);
        if (av[1][1] == 'p')
            is_pal_p(save->nb, save);
    }
    return (0);
}

int check_ni(int ac, char **av, save_t *save)
{
    if (ac == 9) {
        if (n_or_p(av) == 84 || is_int(av[2]) == 84 ||
            check_b(ac, av, save) == 84 || is_int(av[4]) ||
            check_imin(av, save) == 84 || is_pal_if_p(av) == 84 ||
            n_is_zero(av) == 84) {
            my_printf("invalid argument\n");
            return (84);
        }
        save = set_save(save, av[2]);
        if (av[1][1] == 'n')
            is_pal_n(save->nb, save);
        if (av[1][1] == 'p')
            is_pal_p(save->nb, save);
    }
    return (0);
}