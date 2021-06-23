/*
** EPITECH PROJECT, 2021
** my.h
** File description:
** Include file containing all the necessary prototypes.
*/

#ifndef MY_H_
#define MY_H_
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
    int nb;
    int nb_pal;
    int it;
    int base_n;
    int imin;
    int imax;
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

int my_factrec_synthesis(int nb);
int my_squareroot_synthesis(int nb);
void print_info(void);
save_t *set_save(save_t *save, char *av);
int my_h(int ac, char **av);
int is_int(char *av);
int check_long(int ac);
int check_n(char **av);
int check_p(char **av);
int check_b(int ac, char **av, save_t *save);
int check_t(int ac, char **av, save_t *save);
int check_c(int ac, char **av, save_t *save);
int check_s(int ac, char **av, save_t *save);
int check_ni(int ac, char **av, save_t *save);
int check_imin(char **av, save_t *save);
int change_pal(char *str, save_t *save);
int add_pal(char *str, save_t *save);
int iteration(char *str);
int error_mana(int ac, char **av);
int n_or_p(char **av);
int rev_int(int nb);
int is_pal_n(int nb, save_t *save);
int is_pal_p(int nb, save_t *save);
int can_become_pal(int nb, int pal, save_t *save);
void print_p(int i, int pal, save_t *save);
void print_n(save_t *save);
save_t *set_save_s(save_t *save, char **av);
int is_pal_if_p(char **av);
int n_is_zero(char **av);
int check_imin_if_c(char **av, int ac, save_t *save);
#endif /*MY_H_*/