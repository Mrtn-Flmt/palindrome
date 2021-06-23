/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main file
*/

#include "./../include/my.h"

int check_ac(int ac)
{
    if (ac != 2 && ac != 3 && ac != 5 && ac != 7 && ac != 9) {
        my_printf("invalid argument\n");
        return (84);
    }
    return (0);
}

int check(int ac, char **av, save_t *save)
{
    if (check_t(ac, av, save) == 84)
        return (84);
    if (check_c(ac, av, save) == 84)
        return (84);
    if (check_s(ac, av, save) == 84)
        return (84);
    if (check_ni(ac, av, save) == 84)
        return (84);
    return (0);
}

int main(int ac, char **av)
{
    save_t *save = NULL;

    if (check_ac(ac) == 84)
        return (84);
    if (check(ac, av, save) == 84)
        return (84);
    if (my_h(ac, av) == 84)
        return (84);
    return (0);
}