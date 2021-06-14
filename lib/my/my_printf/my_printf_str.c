/*
** EPITECH PROJECT, 2020
** my_printf_str.c
** File description:
** my print str in c
*/

#include <stdarg.h>

void my_putstr(char *str);

int my_printf_str(va_list *my_list)
{
    char *src = va_arg(*my_list, char *);
    my_putstr(src);
    return (0);
}