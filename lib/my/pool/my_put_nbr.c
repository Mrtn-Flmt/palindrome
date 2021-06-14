/*
** EPITECH PROJECT, 2020
** my_put_nbr.c
** File description:
** my lib
*/

void my_putchar(char c);

void my_put_nbr(int nb)
{
    if (nb < 0) {
        my_putchar('-');
        nb = (nb * -1);
    }
    if (nb >= 10)
        my_put_nbr(nb / 10);
    my_putchar((nb % 10) + 48);
}