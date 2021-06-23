/*
** EPITECH PROJECT, 2021
** print_info
** File description:
** info
*/

#include "./../include/my.h"

int my_h(int ac, char **av)
{
    if (ac == 2 && (av[1][0] == '-' && av[1][1] == 'h')) {
        print_info();
        return (0);
    } else if (ac == 2 && (av[1][0] == '-' || av[1][1] == 'h')) {
        my_printf("invalid argument\n");
        return (84);
    }
    return (0);
}

void print_info(void)
{
    my_putstr("USAGE\n");
    my_putstr("      ./palindrome -n number -p plaindrome ");
    my_putstr("[-b base] [-imin i] [i-max i]\n\n");
    my_putstr("DESCRIPTION\n");
    my_putstr("      -n n      integer to be tranformed (>=0)\n");
    my_putstr("      -p pal    palindromic number to be obtained ");
    my_putstr("(incompatible with the -n option) (>=0)\n");
    my_putstr("                if defined, all fitting values off n will ");
    my_putstr("be output\n");
    my_putstr("      -b base   base in wich the procedure will be executed ");
    my_putstr("(1<b<=10) [def: 10]\n");
    my_putstr("      -imin i   minimum number of iterations, included ");
    my_putstr("(>=0) [def: 0]\n");
    my_putstr("      -imax i   minimum number of iterations, included ");
    my_putstr("(>=0) [def: 100]\n");
}

void print_n(save_t *save)
{
    my_put_nbr(save->nb);
    my_putstr(" leads to ");
    my_put_nbr(save->nb_pal);
    my_putstr(" in ");
    my_put_nbr(save->it);
    my_putstr(" iteration(s) in base 10\n");
}

void print_p(int i, int pal, save_t *save)
{
    my_put_nbr(i);
    my_putstr(" leads to ");
    my_put_nbr(pal);
    my_putstr(" in ");
    my_put_nbr(save->it);
    my_putstr(" iteration(s) in base 10\n");
}