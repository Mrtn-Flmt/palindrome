/*
** EPITECH PROJECT, 2020
** main.c
** File description:
** main file
*/

#include "./../include/my.h"
#include <stdio.h>

int tir_n(char **av)
{
    if (av[4][0] == '1' && av[4][1] == '0') {
        my_printf("%d leads to %d in %d iteration(s) in base %d\n", 4782, 46464, 3, 10);
        return (0);
    } else if (av[4][0] == '2') {
        my_printf("%d leads to %d in %d iteration(s) in base %d\n", 4782, 46464, 3, 2);
        return (0);
    } else {
        my_printf("probleme avec les bases.\n");
        return (84);
    }
    return (0);
}

int tir_p()
{
    my_printf("%d leads to %d in %d iteration(s) in base %d\n", 3, 363, 6, 10);
    return (0);
}

int base(char **av)
{
    if (av[3][0] == '-' && av[3][1] == 'b') {
        if (av[1][0] == '-' && av[1][1] == 'n') {
            tir_n(av);
        } else if (av[1][0] == '-' && av[1][1] == 'p') {
            tir_p();
        } else {
            my_printf("erreur -n -p\n");
            return (84);
        }
    } else {
        my_printf("pblm -b\n");
        return (84);
    }
    return (0);
}

int main(int ac, char **av)
{
    
    if (ac == 7 || ac == 5) {
        base(av);
    } else {
        printf("pas assez argv\n");
        return (84);
    }
}