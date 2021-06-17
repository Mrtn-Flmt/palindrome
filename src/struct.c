/*
** EPITECH PROJECT, 2020
** main.c
** File description:
** main file
*/

#include "./../include/my.h"

save_t *set_save(save_t *save, char **av)
{
    save = malloc(sizeof(save_t));
    save->nb = malloc(sizeof(char) * (my_strlen(av[2])));
    save->nb = av[2];
    return (save);
}