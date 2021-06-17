/*
** EPITECH PROJECT, 2020
** my.h
** File description:
** Include file containing all the necessary prototypes.
*/

#include <stdarg.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <ncurses.h>

typedef struct save_s
{
    char *nb;
    int it;
    int base_n;
} save_t;

void my_putchar(char c);
void my_put_nbr(int nb);
void my_putstr(char *str);
int my_printf_str(va_list *my_list);
int my_printf_char(va_list *my_list);
int my_printf_nbr(va_list *my_list);
int my_printf(char *src, ...);
int my_printf_bin(va_list *my_list);
int my_printf_oct(va_list *my_list);
int my_printf_hex(va_list *my_list);
int *my_swap(int a, int b, int *arr);
int *my_intcpy (int *dest, int const *src, int n);
int my_strlen(char const *str);
int my_atoi(char *s);
char *my_revstr(char *str);
char *my_strcpy (char *dest, char const *src);
char *my_strncpy (char *dest, char const *src, int n);
int my_error(int ac, int x, char *s, int positif);
int my_perror(char *c);

long my_factrec_synthesis(int nb);
int my_squareroot_synthesis(int nb);
void print_info(void);
int my_help(int ac, char **av);
save_t *set_save(save_t *save, char **av);