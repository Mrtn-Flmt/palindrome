/*
** EPITECH PROJECT, 2021
** requirement.c
** File description:
** info
*/

#include "./../include/my.h"

int my_factrec_synthesis(int nb)
{
    if (nb == 1 || nb == 0)
        return (1);
    else if (nb >= 2 && nb <= 12) {
        return (nb * my_factrec_synthesis(nb - 1));
    } else
        return (0);
}

int my_squareroot_synthesis(int nb)
{
    int resultat = 0;
    int index = 0;
    int add = 0;

    while (resultat < nb) {
        add += 2;
        resultat += add;
        index++;
    }
    resultat -= nb;
    if (resultat * resultat == nb)
        return (index);
    else
        return (-1);
}