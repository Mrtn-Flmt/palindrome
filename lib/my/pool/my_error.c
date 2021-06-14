/*
** EPITECH PROJECT, 2020
** my_error.c
** File description:
** error
*/

// management of number of arguments (ac)
// message error : *s
// 0 for (ac < x) || 1 for (ac > x) (int positif)

#include "../../../include/my.h"

int my_error(int ac, int x, char *s, int positif)
{
    if (positif == 1) {
        if (ac < x) {
            my_printf("%s", s);
            return (84);
        }
    } else if (positif == 0) {
        if (ac > x) {
            my_printf("%s", s);
            return (84);
        }
    }
    return (0);
}