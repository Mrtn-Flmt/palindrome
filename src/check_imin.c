/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main file
*/

#include "./../include/my.h"

int check_imin(char **av, save_t *save)
{
    if (is_int(av[6]) == 84)
        return (84);
    if (av[5][0] == '-' && av[5][1] == 'i' &&
        av[5][2] == 'm' && av[5][3] == 'i' &&
        av[5][4] ==  'n') {
        save->imin = my_atoi(av[6]);
        save->imax = 100;
        return (0);
    } else if (av[5][0] == '-' && av[5][1] == 'i' &&
        av[5][2] == 'm' && av[5][3] == 'a' &&
        av[5][4] ==  'x') {
        save->imax = my_atoi(av[6]);
        save->imin = 0;
        return (0);
    }
    return (84);
}

int check_imin_if_c(char **av, int ac, save_t *save)
{
    if (av[3][0] == '-' && av[3][1] == 'i' && av[3][2] == 'm' &&
        av[3][3] == 'i' && av[3][4] == 'n') {
        save->imin = my_atoi(av[4]);
        save->imax = 100;
        return (0);
    } else if (av[3][0] == '-' && av[3][1] == 'i' && av[3][2] == 'm' &&
        av[3][3] == 'a' && av[3][4] == 'x') {
        save->imax = my_atoi(av[4]);
        save->imin = 0;
        return (0);
    }
    return (1);
}