/*
** EPITECH PROJECT, 2020
** main.c
** File description:
** main file
*/

#include "./../include/my.h"
#include <stdio.h>

int main(int ac, char **av)
{
    int nb = my_atoi(av[1]);
    long fact_nb = my_factrec_synthesis(nb);

    if (ac == 2 && av[1][0] == '-' && av[1][1] == 'h') {
        print_info();
        return (0);
    }
    my_putstr("nb fact ");
    my_put_nbr(nb);
    my_putstr(" = ");
    my_put_nbr(fact_nb);
    return (0);
}