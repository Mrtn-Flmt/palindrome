/*
** EPITECH PROJECT, 2021
** check.c
** File description:
** check argv
*/

#include "./../include/my.h"

int error_mana(int ac, char **av)
{
    if (ac < 2 || (ac != 3 && ac != 5 && ac != 7 && ac != 9)) {
        my_printf("invalid argument\n");
        return (84);
    }
    return (0);
}

int n_or_p(char **av)
{
    if (check_n(av) == 0) {
        return (0);
    }
    if (check_p(av) == 0) {
        return (0);
    }
    return (84);
}

int check_b(int ac, char **av, save_t *save)
{
    if (av[3][0] == '-' && av[3][1] == 'b' && my_atoi(av[4]) >= 2
        && my_atoi(av[4]) <= 10)
        return (0);
    else if (is_int(av[3]) == 0)
        return (0);
    if (ac == 5) {
        check_imin_if_c(av, ac, save);
        return (0);
    }
    return (84);
}

int check_n(char **av)
{
    if (av[1][0] == '-' && av[1][1] == 'n')
        return (0);
    return (84);
}

int check_p(char **av)
{
    if (av[1][0] == '-' && av[1][1] == 'p')
        return (0);
    return (84);
}