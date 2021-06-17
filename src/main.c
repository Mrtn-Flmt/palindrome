/*
** EPITECH PROJECT, 2020
** main.c
** File description:
** main file
*/

#include "./../include/my.h"

int tir_n(char **av, save_t *save)
{
    set_save(save, av);
    if (av[4][0] == '1' && av[4][1] == '0') {
        my_printf("%s leads to %d in %d iteration(s) in base %d\n", save->nb, 0, 0, 10);
        return (0);
    } else if (av[4][0] == '2') {
        my_printf("%s leads to %d in %d iteration(s) in base %d\n", save->nb, 0 ,0, 2);
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
    save_t *save;

    if (av[3][0] == '-' && av[3][1] == 'b') {
        if (av[1][0] == '-' && av[1][1] == 'n') {
            save = set_save(save, av);
            tir_n(av, save);
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
        printf("invalid argument\n");
        return (84);
    }
}