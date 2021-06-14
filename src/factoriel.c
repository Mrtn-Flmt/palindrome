/*
** EPITECH PROJECT, 2020
** main.c
** File description:
** main file
*/

#include "./../include/my.h"

long my_factrec_synthesis(int nb)
{
    if (nb >= 1)
        return (nb * my_factrec_synthesis(nb - 1));
    else
        return (1);
}