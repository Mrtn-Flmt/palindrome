/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main file
*/

#include "./../include/my.h"

int rev_int(int nb)
{
    int new_nb = 0;

    while (nb > 0) {
        new_nb *= 10;
        new_nb += nb % 10;
        nb /= 10;
    }
    return (new_nb);
}

save_t *set_save_s(save_t *save, char **av)
{
    save = malloc(sizeof(save_t));
    save->nb = my_atoi(av[2]);
    save->nb_pal = 0;
    save->it = 0;
    check_imin(av, save);
    return (save);
}

save_t *set_save(save_t *save, char *av)
{
    save = malloc(sizeof(save_t));
    save->nb = my_atoi(av);
    save->nb_pal = 0;
    save->it = 0;
    save->imin = 0;
    save->imax = 100;
    return (save);
}