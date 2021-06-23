/*
** EPITECH PROJECT, 2021
** requirement.c
** File description:
** info
*/

#include "./../include/my.h"

int is_int(char *av)
{
    char *str;
    str = av;
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] <= '9' && str[i] >= '0')
            i++;
        else {
            return (84);
        }
    }
    return (0);
}